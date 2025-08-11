from pylab import *
import pandas as pd

from fdtd import *
from debye import *

from sys import *
import glob

# import gmsh
# from pyelmer import elmer
# from pyelmer import execute
# from pyelmer.post import scan_logfile
# from objectgmsh import add_physical_group, get_boundaries_in_box

###### SELECT WHAT TO RUN ######
fdtd_test = int(sys.argv[1])
fdtd_test_debug = 0
hfss_test = 0
theo_test = 1
################################

# Sweep Variables
f_max = 14e9
f_start = 1e9
f_stop = f_max

num_points = 201

f = np.array(linspace(f_start,f_stop,num_points))
angularf = 2*np.pi*f

# Model Variables
unit = 1e-3 # mm units
x = 10000 # 20m, FDTD
y = 10000 # 20m, FDTD
z1 = 8 # 5mm thick
z2 = 3
z3 = 20

# Relative Permittivities
er1 = 1
er2 = 5.447
er3 = 2

# Relative Permeabilities
ur1 = 1
ur2 = 1
ur3 = 1

# Conductivities/Dielectric Loss Tangent
s1 = 0
s2 = 0
s3 = 0

# # Skin
# skin_debye = DebyeParameters(40.936, 23.649, 0.3951, 0.72531, angularf[0], angularf[len(angularf)-1])
# er1 = FirstOrderDebyeEquationEPS(40.936, 23.649, 0.3951, 0.72531, angularf[0], angularf[len(angularf)-1], 0, num_points)
# s1 = FirstOrderDebyeEquationCOND(40.936, 23.649, 0.3951, 0.72531, angularf[0], angularf[len(angularf)-1], 0, num_points)

# Fat
fat_debye = DebyeParameters(5.447, 4.0997, 0.17656, 0.27615, angularf[0], angularf[len(angularf)-1])
er2 = FirstOrderDebyeEquationEPS(5.447, 4.0997, 0.17656, 0.27615, angularf[0], angularf[len(angularf)-1], 0, num_points)
s2 = FirstOrderDebyeEquationCOND(5.447, 4.0997, 0.17656, 0.27615, angularf[0], angularf[len(angularf)-1], 0, num_points)

# Muscle
# muscle_debye = DebyeParameters(54.811, 32.98, 0.3208, 0.6682, angularf[0], angularf[len(angularf)-1])
# er3 = FirstOrderDebyeEquationEPS(54.811, 32.98, 0.3208, 0.6682, angularf[0], angularf[len(angularf)-1], 0, num_points)
# s3 = FirstOrderDebyeEquationCOND(54.811, 32.98, 0.3208, 0.6682, angularf[0], angularf[len(angularf)-1], 0, num_points)

#### Calculating Theoretical S11 ####
def calculate_layered_reflection(freqs, thicknesses, real_permittivities, conductivities):
    """
    Calculates the reflection coefficient (S11) for a layered dielectric structure
    using the transfer matrix method by combining real permittivity and conductivity.

    Args:
        freqs (np.ndarray): Array of frequencies in Hz.
        thicknesses (list): List of layer thicknesses in meters.
        real_permittivities (list): List of real permittivity values (e.g., epsilon_r * epsilon_0) for each layer.
        conductivities (list): List of conductivity values (sigma) for each layer in S/m.

    Returns:
        tuple: A tuple containing:
               - reflection_coefficient (np.ndarray): Complex reflection coefficient (S11)
               - magnitude_db (np.ndarray): S11 magnitude in dB.
               - phase_rad (np.ndarray): S11 phase in radians.
    """
    # Constants
    c = 299792458  # Speed of light in m/s
    mu0 = 4 * np.pi * 1e-7  # Permeability of free space

    num_layers = len(thicknesses)
    num_freqs = len(freqs)

    reflection_coefficient = np.zeros(num_freqs, dtype=complex)
    print(real_permittivities[len(real_permittivities)-1])

    real_permittivities = np.concatenate(real_permittivities, real_permittivities[len(real_permittivities)-1])
    print(real_permittivities)
    conductivities = np.concatenate(conductivities, conductivities[len(conductivities)-1])


    for i, f in enumerate(freqs):
        omega = 2 * np.pi * f
        
        # Calculate complex permittivity for each layer at this frequency
        complex_permittivities = [
            real_permittivities[k] - 1j * conductivities[k] / omega
            for k in range(len(real_permittivities))
        ]

        # Characteristic Impedance (eta) and Propagation Constant (gamma) for each layer
        etas = []
        gammas = []
        for epsilon_star in complex_permittivities:
            gamma = 1j * omega * np.sqrt(mu0 * epsilon_star)
            eta = np.sqrt(mu0 / epsilon_star)
            gammas.append(gamma)
            etas.append(eta)

        # Initialize the total transfer matrix as the identity matrix
        T_total = np.identity(2, dtype=complex)

        # Loop through each interface from the medium of incidence
        for k in range(num_layers):
            d = thicknesses[k]
            eta_k = etas[k]
            eta_k_plus_1 = etas[k + 1]
            gamma_k = gammas[k]
            
            # Transfer matrix for the interface
            interface_matrix = 0.5 * np.array([
                [1 + eta_k_plus_1 / eta_k, 1 - eta_k_plus_1 / eta_k],
                [1 - eta_k_plus_1 / eta_k, 1 + eta_k_plus_1 / eta_k]
            ], dtype=complex)
            
            # Propagation matrix for the k-th layer
            propagation_matrix = np.array([
                [np.exp(gamma_k * d), 0],
                [0, np.exp(-gamma_k * d)]
            ], dtype=complex)

            # Accumulate the matrices to find the total transfer matrix
            T_total = T_total @ propagation_matrix @ interface_matrix

        # Reflection coefficient from the final total matrix
        s11 = T_total[1, 0] / T_total[0, 0]
        reflection_coefficient[i] = s11

    # Calculate magnitude and phase
    magnitude_db = 20 * np.log10(np.abs(reflection_coefficient))
    phase_rad = np.angle(reflection_coefficient)

    return reflection_coefficient, magnitude_db, phase_rad

def theo_s11(ers, ss, urs, d, num_points, f):
    """Calculate theoretical S11 for layered dielectrics.
    Args:
        ers: List of relative permittivities for each layer (can be scalars or arrays)
        ss: List of conductivities for each layer (can be scalars or arrays)
        urs: Array of relative permeabilities for each layer (should be arrays)
        d: Array of thicknesses for each layer (in meters)
        num_points: Number of frequency points to calculate
        
    Returns:
        Theoretical S11 as a complex array over the frequency range.
        
    Note:
        EPS0 is the permittivity of free space (8.854187817e-12 F/m)
        MUE0 is the permeability of free space (4*pi*1e-7 H/m)
        angularf is the angular frequency array (2*pi*f)
    """

    angularf = np.array(2*np.pi*f)
    s11 = 0

    # Check that ers, ss, and urs are the same size
    if not (len(ers) == len(ss) == len(urs)):
        raise ValueError("ers, ss, and urs must have the same number of layers")
    if not (len(ers) == len(ss) == urs.shape[0]):
        raise ValueError("ers, ss, and urs must have the same number of layers")

    if 0 and all(isinstance(ers, np.ndarray) for var in ers) and all(len(ers)==num_points for var in ers): 
        er = np.array(ers)
    else:
        er = np.array([
            er1*np.ones(num_points),
            er2*np.ones(num_points),
            er3*np.ones(num_points)
        ])
    eps = er*EPS0

    urs = np.array([
        ur1*np.ones(num_points),
        ur2*np.ones(num_points),
        ur3*np.ones(num_points)
    ])
    mue = urs*MUE0

    if 0 and all(isinstance(ss, np.ndarray) for var in ss) and all(len(ss)==num_points for var in ss):
        s = np.array(ss)
    else:
        s = np.array([
            s1*np.ones(num_points),
            s2*np.ones(num_points),
            s3*np.ones(num_points)
        ])


    alpha = angularf*np.sqrt(eps*mue)*np.sqrt(0.5*(np.sqrt(1+(s/(angularf*eps))**2)-1))
    beta  = angularf*np.sqrt(eps*mue)*np.sqrt(0.5*(np.sqrt(1+(s/(angularf*eps))**2)+1))
    Z     = np.sqrt(1j*angularf*mue/(s+1j*angularf*eps))
    gamma = alpha + 1j*beta

    r = (Z[1:] - Z[:-1]) / (Z[1:] + Z[:-1])
    r = np.round(r, 4)

    temp = 1 / ((1-(-r[0,:]))*r[1,:]*np.exp(-2*gamma[1,:]*d[1]))

    g1 = r[0,:] * np.exp(-2*gamma[0,:]*d[0])
    g2 = r[1,:] * (1-r[0,:]**2) * np.exp(-2*(gamma[0,:]*d[0] + gamma[1,:]*d[1])) 
    g = g1+g2
    # g = calculate_layered_reflection(f, d, ers, ss)
    # plot(g)
    return g

    # TODO: implement g_inf and g_x for infinite and cross term models?

    # print((np.exp(-2*(gamma[0,:]*d[0] + gamma[1,:]*d[1]))/
    #                                    ((1-(-r[0,:]))*r[1,:]*np.exp(-2*gamma[1,:]*d[1]))))
    # figure()
    # grid()
    # plot(20*log10(np.abs(g)))
    # show()

#########################################################
########## START openEMS FDTD Simulation Results ##########
#########################################################

if fdtd_test:
    # # Split the frequency sweep into 5 GHz intervals and run FDTD for each -- good for non dirac excitation?
    # s11 = np.zeros(num_points, dtype=complex)
    # sweep_edges = np.arange(f_start, f_stop + 1, 4e9)
    # if sweep_edges[-1] < f_stop:
    #     sweep_edges = np.append(sweep_edges, f_stop)
    # sweep_indices = np.searchsorted(f, sweep_edges)
    # for i in range(len(sweep_edges) - 1):
    #     idx_start = sweep_indices[i]
    #     idx_stop = sweep_indices[i+1]
    #     f_sweep_start = f[idx_start]
    #     f_sweep_stop = f[idx_stop-1] if idx_stop > idx_start else f[idx_start]
    #     num_points_sweep = idx_stop - idx_start
    #     if num_points_sweep <= 1:
    #         continue
    #     s11_part = run_fdtd_s11(
    #         max_timesteps=2e6,
    #         f_start=f_sweep_start,
    #         f_stop=f_sweep_stop,
    #         f_max=f_max,
    #         num_points=num_points_sweep,
    #         er1=er1, er2=er2, er3=er3,
    #         ur1=ur1, ur2=ur2, ur3=ur3,
    #         s1=s1, s2=s2, s3=s3,
    #         x=x, y=y, z1=z1, z2=z2, z3=z3,
    #         unit=unit, fdtd_test_debug=fdtd_test_debug, post_proc_only=False
    #     )
    #     s11[idx_start:idx_stop] = s11_part
    s11 = run_fdtd_s11(max_timesteps=2e6, f_start=f_start, f_stop=f_stop, f_max=f_max, num_points=num_points,
                        er1=er1, er2=er2, er3=er3,
                        ur1=ur1, ur2=ur2, ur3=ur3,
                        s1=s1, s2=s2, s3=s3, 
                        x=x, y=y, z1=z1, z2=z2, z3=z3,
                        unit=unit, fdtd_test_debug=fdtd_test_debug, post_proc_only=False)


#########################################################
########## END openEMS FDTD Simulation Results ##########
#########################################################



#########################################################
########### START HFSS FEM Simulation Results ###########
#########################################################


#########################################################
############ END HFSS FEM Simulation Results ############
#########################################################


#########################################################
############## START Theoretical Results ################
#########################################################

# FDTD theoretical
if theo_test:
    ers = [er1, er2, er3]
    ss = [s1, s2, s3]
    urs = np.array([
        ur1*np.ones(num_points),
        ur2*np.ones(num_points),
        ur3*np.ones(num_points)
    ])

    d = np.array([z1, z2, z3]) * unit

    g = theo_s11(ers, ss, urs, d, num_points, f)

# HFSS Theoretical
if theo_test:
    er2_hfss = 3.27541+2.17159/(1+5.0447e-21*f**2)
    s2_hfss = 0.054066+(8.58077e-21*f**2)/(1+2.83483e-21*f**2)
    ers = [er1, er2_hfss, er3]
    ss = [s1, s2_hfss, s3]
    urs = np.array([
        ur1*np.ones(num_points),
        ur2*np.ones(num_points),
        ur3*np.ones(num_points)
    ])

    d = np.array([z1, z2, z3]) * unit

    g_hfss = theo_s11(ers, ss, urs, d, num_points, f)


#########################################################
################ END Theoretical Results ################
#########################################################


if fdtd_test and theo_test:

    # Plot S-parameter
    try:
        # Create a figure and axis for the plot
        plt.figure(figsize=(10, 6))
        plt.grid()

        # Plot the FDTD data
        plot(f*1e-9,20*log10(abs(s11)),'k-',linewidth=2, label='FDTD '+'$S_{11}$')


        # Plot the theoretical data
        plt.plot(f*1e-9,20*log10(abs(g)),'r--',linewidth=2, label='openEMS Theoretical '+'$S_{11}$')
        plt.plot(f*1e-9,20*log10(abs(g_hfss)),'y:',linewidth=2, label='HFSS Theoretical '+'$S_{11}$')

        # Plot the user-provided CSV data
        temppath = os.path.join(os.path.dirname(os.path.abspath(__file__)), '1-18G_s11_1_fat_2_spdebye_07172025.csv')
        temppath = os.path.join(os.path.dirname(os.path.abspath(__file__)), '1-18G_s11_1_fat_2_spdebye_07172025.csv')
        df_new = pd.read_csv(temppath)
        df_new = df_new[(df_new['Freq [GHz]'] >= f_start / 1e9) & (df_new['Freq [GHz]'] <= f_max / 1e9)]
        plt.plot(df_new['Freq [GHz]'], df_new['dB(S(wp1,wp1)) []'], 'b-', linewidth=2, label='HFSS '+'$S_{11}$')
        
        # Set plot title and labels
        plt.title(f'S-Parameter Plot', fontsize=16)
        plt.xlabel('Frequency (GHz)', fontsize=12)
        plt.ylabel('S-Parameter (dB)', fontsize=12)
        # plt.xlim(df_new['Freq [GHz]'].min(), 4.0)
        plt.grid(True)
        plt.legend()

        # Save the plot
        # plt.savefig('s_parameter_4ghz.png')

        # Print confirmation
        show()
    except FileNotFoundError:
        print("The CSV file '1-18G_s11_1_fat_2_spdebye_07172025.csv' was not found.")

    # ## Compare analytic and numerical wave-impedance
    # figure()
    # plot(f*1e-6,real(ZL), linewidth=2, label='$\Re\{Z_L\}$')
    # grid()
    # plot(f*1e-6,imag(ZL),'r--', linewidth=2, label='$\Im\{Z_L\}$')
    # plot(f*1e-6,ZL_a,'g-.',linewidth=2, label='$Z_{L, analytic}$')
    # ylabel('ZL $(\Omega)$')
    # xlabel(r'frequency (MHz) $\rightarrow$')
    # legend()

elif theo_test:

    try:
        # Create a figure and axis for the plot
        plt.figure(figsize=(10, 6))
        plt.grid()

        # Plot the FDTD data
        dir_path = 'results'
        file_pattern = os.path.join(dir_path, '*.csv')
        list_of_files = glob.glob(file_pattern)
        if not list_of_files:
            print(f"No CSV files found in the '{dir_path}' directory.")
        else:
            # 4. Find the most recent file by sorting by modification time.
            most_recent_file = max(list_of_files, key=os.path.getmtime)
            print(f"The most recent file found is: {os.path.basename(most_recent_file)}")

            # 5. Load the most recent file into a pandas DataFrame.
            s11 = pd.read_csv(most_recent_file)


        # s11 = pd.read_csv("results/layered_dielectrics_openEMS_FDTD_2025-08-11_13-10-11.csv")
        s11['s11'] = s11['s11'].apply(lambda x: complex(x.replace('i', 'j')))        
        s11 = s11[(s11['f'] >= f_start) & (s11['f'] <= f_max)]
        plot(s11['f']/1e9,20*log10(abs(s11['s11'])),'k-',linewidth=2, label='FDTD '+'$S_{11}$')

        # Plot the theoretical data
        plt.plot(f*1e-9,20*log10(abs(g)),'r--',linewidth=2, label='openEMS Theoretical '+'$S_{11}$')
        plt.plot(f*1e-9,20*log10(abs(g_hfss)),'y:',linewidth=2, label='HFSS Theoretical '+'$S_{11}$')

        # Plot the user-provided CSV data
        df_new = pd.read_csv('1-18G_s11_1_fat_2_spdebye_07172025.csv')
        df_new = df_new[(df_new['Freq [GHz]'] >= f_start / 1e9) & (df_new['Freq [GHz]'] <= f_max / 1e9)]
        plt.plot(df_new['Freq [GHz]'], df_new['dB(S(wp1,wp1)) []'], 'b-', linewidth=2, label='HFSS '+'$S_{11}$')
        
        # Set plot title and labels
        plt.title(f'S-Parameter Plot', fontsize=16)
        plt.xlabel('Frequency (GHz)', fontsize=12)
        plt.ylabel('S-Parameter (dB)', fontsize=12)
        # plt.xlim(df_new['Freq [GHz]'].min(), 4.0)
        plt.grid(True)
        plt.legend()

        # Save the plot
        # plt.savefig('s_parameter_4ghz.png')

        # Print confirmation
        show()
    except FileNotFoundError:
        print("The CSV file '1-18G_s11_1_fat_2_spdebye_07172025.csv' was not found.")

