import os, tempfile
from datetime import datetime as dt
from pylab import *
import pandas as pd

from CSXCAD import ContinuousStructure, ParameterObjects
from openEMS import openEMS
from openEMS.physical_constants import *

# import gmsh
# from pyelmer import elmer
# from pyelmer import execute
# from pyelmer.post import scan_logfile
# from objectgmsh import add_physical_group, get_boundaries_in_box

###### SELECT WHAT TO RUN ######
fdtd_test = 1
fdtd_test_debug = 1
hfss_test = 0
theo_test = 1
################################

# Sweep Variables
f_max = 18e9
f_start = 1e9
f_stop = f_max

num_points = 201

f = np.array(linspace(f_start,f_stop,num_points))
angularf = np.array(2*np.pi*f)

# Model Variables
unit = 1e-3 # mm units
x = 20000 # 20m wide, FDTD
y = 20000 # 20m tall, FDTD
z1 = 3 # 5mm thick
z2 = 8
z3 = 20

# Relative Permittivities
er1 = 40.936
er2 = 5.447
er3 = 54.811

# Relative Permeabilities
ur1 = 1
ur2 = 1
ur3 = 1

# Conductivities/Dielectric Loss Tangent
s1 = 0
s2 = 0
s3 = 0

#### Debye parameter function calculation ####
def DebyeParameters(eps_f1, eps_f2, tand_1, tand_2, omega_1, omega_2):
    eps_s = eps_f1
    s_f1 = omega_1*EPS0*eps_f1*tand_1
    s_f2 = omega_2*EPS0*eps_f2*tand_2 - s_f1
    t_relax = EPS0 * (np.abs(eps_f1-eps_f2) / np.abs(s_f2-s_f1))
    eps_inf = eps_s - np.abs(eps_s - eps_f2) * ((1+(omega_2*t_relax)**2)/(omega_2*t_relax)**2)
    eps_delta = eps_s - eps_inf
    return [eps_inf, eps_delta, t_relax]

def FirstOrderDebyeEquationEPS(eps_f1, eps_f2, tand_1, tand_2, omega_1, omega_2, s_DC):
    parameters = DebyeParameters(eps_f1, eps_f2, tand_1, tand_2, omega_1, omega_2)
    omega = angularf
    return parameters[0] + parameters[1] / (1+1j*omega*parameters[2]) + s_DC/(1j*omega*EPS0)

def FirstOrderDebyeEquationCOND(eps_f1, eps_f2, tand_1, tand_2, omega_1, omega_2, s_DC):
    eps_s = eps_f1
    parameters = DebyeParameters(eps_f1, eps_f2, tand_1, tand_2, omega_1, omega_2)
    omega = angularf
    return s_DC + (omega**2*EPS0*parameters[2]*(eps_s-parameters[0]))/(1+(omega*parameters[2])**2)


#########################################################
########## START openEMS FDTD Simulation Results ##########
#########################################################

if fdtd_test:

    sim_path = os.path.join(tempfile.gettempdir(), 'layered_dielectrics')
    post_proc_only = False
    print(sim_path)

    FDTD = openEMS(NrTS=3e5, EndCriteria=1e-5)
    # FDTD = openEMS(NrTS=5e5)
    FDTD.SetGaussExcite(0.5*(f_start+f_stop),0.5*(f_stop-f_start))
    FDTD.SetBoundaryCond( [ 'PEC', 'PEC', 'PMC', 'PMC', 'MUR', 'MUR' ] )

    # Setup geom & mesh
    CSX = ContinuousStructure()
    FDTD.SetCSX(CSX)

    # XY Mesh
    mesh = CSX.GetGrid()
    mesh.SetDeltaUnit(unit)

    resolution = C0/(f_max*np.sqrt(max(er1,er2,er3))) / unit / 10
    print(resolution)

    ## Do manual meshing
    mesh.AddLine('x', [0, x])
    mesh.AddLine('y', [0, y])
    mesh.AddLine('z', [-1, z1+z2+z3])

    ## Material definition for Debye calculations ##

    # Skin
    skin_debye = DebyeParameters(40.936, 23.649, 0.3951, 0.72531, angularf[0], angularf[len(angularf)-1])
    er1 = FirstOrderDebyeEquationEPS(40.936, 23.649, 0.3951, 0.72531, angularf[0], angularf[len(angularf)-1], 0)
    s1 = FirstOrderDebyeEquationCOND(40.936, 23.649, 0.3951, 0.72531, angularf[0], angularf[len(angularf)-1], 0)

    # Fat
    fat_debye = DebyeParameters(5.447, 4.0997, 0.17656, 0.27615, angularf[0], angularf[len(angularf)-1])
    er2 = FirstOrderDebyeEquationEPS(5.447, 4.0997, 0.17656, 0.27615, angularf[0], angularf[len(angularf)-1], 0)
    s2 = FirstOrderDebyeEquationCOND(5.447, 4.0997, 0.17656, 0.27615, angularf[0], angularf[len(angularf)-1], 0)

    # Muscle
    muscle_debye = DebyeParameters(54.811, 32.98, 0.3208, 0.6682, angularf[0], angularf[len(angularf)-1])
    er3 = FirstOrderDebyeEquationEPS(54.811, 32.98, 0.3208, 0.6682, angularf[0], angularf[len(angularf)-1], 0)
    s3 = FirstOrderDebyeEquationCOND(54.811, 32.98, 0.3208, 0.6682, angularf[0], angularf[len(angularf)-1], 0)
    
    
    layer1 = CSX.AddDebyeMaterial( 'skin_debye' , epsilon=skin_debye[0]*np.ones(3), order=1)
    layer1.SetDispersiveMaterialWeightDir('eps_delta', 0, 0, skin_debye[1])
    layer1.SetDispersiveMaterialWeightDir('eps_delta', 0, 1, skin_debye[1])
    layer1.SetDispersiveMaterialWeightDir('eps_delta', 0, 2, skin_debye[1])
    layer1.SetDispersiveMaterialWeightDir('eps_relax', 0, 0, skin_debye[2])
    layer1.SetDispersiveMaterialWeightDir('eps_relax', 0, 1, skin_debye[2])
    layer1.SetDispersiveMaterialWeightDir('eps_relax', 0, 2, skin_debye[2]) 
    start = [0, 0, -1]
    stop  = [x, y, z1]
    layer1.AddBox(start, stop)

    layer2 = CSX.AddDebyeMaterial( 'fat_debye' , epsilon=fat_debye[0]*np.ones(3), order=1)
    layer2.SetDispersiveMaterialWeightDir('eps_delta', 0, 0, fat_debye[1])
    layer2.SetDispersiveMaterialWeightDir('eps_delta', 0, 1, fat_debye[1])
    layer2.SetDispersiveMaterialWeightDir('eps_delta', 0, 2, fat_debye[1])
    layer2.SetDispersiveMaterialWeightDir('eps_relax', 0, 0, fat_debye[2])
    layer2.SetDispersiveMaterialWeightDir('eps_relax', 0, 1, fat_debye[2])
    layer2.SetDispersiveMaterialWeightDir('eps_relax', 0, 2, fat_debye[2])     
    start = [0, 0, z1]
    stop  = [x, y, z1+z2]
    layer2.AddBox(start, stop)

    layer3 = CSX.AddDebyeMaterial( 'muscle_debye' , epsilon=muscle_debye[0]*np.ones(3), order=1)
    layer3.SetDispersiveMaterialWeightDir('eps_delta', 0, 0, muscle_debye[1])
    layer3.SetDispersiveMaterialWeightDir('eps_delta', 0, 1, muscle_debye[1])
    layer3.SetDispersiveMaterialWeightDir('eps_delta', 0, 2, muscle_debye[1])
    layer3.SetDispersiveMaterialWeightDir('eps_relax', 0, 0, muscle_debye[2])
    layer3.SetDispersiveMaterialWeightDir('eps_relax', 0, 1, muscle_debye[2])
    layer3.SetDispersiveMaterialWeightDir('eps_relax', 0, 2, muscle_debye[2])     
    start = [0, 0, z1+z2]
    stop  = [x, y, z1+z2+z3]
    layer3.AddBox(start, stop)

    ## Apply the waveguide port
    ports = []
    start=[0, 0, -1]
    stop =[x, y, 0]
    # mesh.AddLine('z', [start[2], stop[2]])
    ports.append(FDTD.AddRectWaveGuidePort( 0, start, stop, 'z', x*unit, y*unit, 'TE10', excite=1))

    start=[0, 0, z1+z2+z3]
    stop =[x, y, z1+z2+z3-1]
    mesh.AddLine('z', [start[2], stop[2]])
    ports.append(FDTD.AddRectWaveGuidePort( 1, start, stop, 'z', x*unit, y*unit, 'TE10'))

    # mesh.SmoothMeshLines('all', resolution, ratio=1.5)
    mesh.SmoothMeshLines('x', resolution*2000, ratio=1.5)
    mesh.SmoothMeshLines('y', resolution*2000, ratio=1.5)
    mesh.SmoothMeshLines('z', resolution/20, ratio=1.5)


    ### Define dump box...
    # Et = CSX.AddDump('Et', file_type=0, sub_sampling=[2,2,2])
    # start = [0, 0, 0];
    # stop  = [x, y, z1+z2+z3];
    # Et.AddBox(start, stop);

    ### Run the simulation
    if fdtd_test_debug:  # debugging only
        CSX_file = os.path.join(sim_path, 'layered_dielectrics.xml')
        if not os.path.exists(sim_path):
            os.mkdir(sim_path)
        CSX.Write2XML(CSX_file)
        from CSXCAD import AppCSXCAD_BIN
        os.system(AppCSXCAD_BIN + ' "{}"'.format(CSX_file))

    if not post_proc_only:
        FDTD.Run(sim_path, cleanup=True, verbose=3)

    ### Postprocessing & plotting
    for port in ports:
        port.CalcPort(sim_path, f)

    s11 = ports[0].uf_ref / ports[0].uf_inc
    s21 = ports[1].uf_ref / ports[0].uf_inc
    ZL  = ports[0].uf_tot / ports[0].if_tot
    ZL_a = ports[0].ZL # analytic waveguide impedance

    fdtd_output = {
        'f' : f,
        's11' : s11,
        's21' : s21,
        'ZL' : ZL,
        'ZL_a' : ZL_a
    }

    fdtd_output_DF = pd.DataFrame(fdtd_output)
    fdtd_output = fdtd_output_DF.dropna(inplace=True)

    timestamp = dt.now().strftime("%Y-%m-%d_%H-%M-%S")
    print(f'Finishing up openEMS FDTD at {timestamp}')
    filename = os.path.join(os.path.dirname(os.path.abspath(__file__)), f"layered_dielectrics_openEMS_FDTD_{timestamp}.csv")
    fdtd_output_DF.to_csv(filename, index=False)
    print(f'Finishing export to {filename}')


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
######### START (other) FEM Simulation Results ##########
#########################################################

#########################################################
########## END (other) FEM Simulation Results ###########
#########################################################


#########################################################
############## START Theoretical Results ################
#########################################################

if theo_test:
    ers = [er1, er2, er3]
    ss = [s1, s2, s3]

    d = np.array([z1, z2, z3]) * unit

    if 0 and all(isinstance(ers, np.ndarray) for var in ers) and all(len(ers)==num_points for var in ers): 
        er = np.array(ers)
    else:
        er = np.array([
            er1*np.ones(num_points),
            er2*np.ones(num_points),
            er3*np.ones(num_points)
        ])
    eps = er*EPS0

    ur = np.array([
        ur1*np.ones(num_points),
        ur2*np.ones(num_points),
        ur3*np.ones(num_points)
    ])
    mue = ur*MUE0

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

    # TODO: implement g_inf and g_x for infinite and cross term models?

    # print((np.exp(-2*(gamma[0,:]*d[0] + gamma[1,:]*d[1]))/
    #                                    ((1-(-r[0,:]))*r[1,:]*np.exp(-2*gamma[1,:]*d[1]))))
    # figure()
    # grid()
    # plot(20*log10(np.abs(g)))
    # show()


#########################################################
################ END Theoretical Results ################
#########################################################


if fdtd_test and theo_test:
    ## Plot s-parameter
    figure()
    plot(f*1e-6,20*log10(abs(s11)),'k-',linewidth=2, label='FDTD '+'$S_{11}$')
    grid()
    plot(f*1e-6,20*log10(abs(g)),'r--',linewidth=2, label='Theoretical '+'$S_{11}$')
    legend();
    ylabel('S-Parameter (dB)')
    xlabel(r'frequency (MHz) $\rightarrow$')

    # ## Compare analytic and numerical wave-impedance
    # figure()
    # plot(f*1e-6,real(ZL), linewidth=2, label='$\Re\{Z_L\}$')
    # grid()
    # plot(f*1e-6,imag(ZL),'r--', linewidth=2, label='$\Im\{Z_L\}$')
    # plot(f*1e-6,ZL_a,'g-.',linewidth=2, label='$Z_{L, analytic}$')
    # ylabel('ZL $(\Omega)$')
    # xlabel(r'frequency (MHz) $\rightarrow$')
    # legend()

    show()
elif theo_test:
    ## Plot s-parameter
    figure()
    grid()
    plot(f*1e-6,20*log10(abs(g)),'r--',linewidth=2, label='Theoretical '+'$S_{11}$')
    legend();
    ylabel('S-Parameter (dB)')
    xlabel(r'frequency (MHz) $\rightarrow$')
    show()
