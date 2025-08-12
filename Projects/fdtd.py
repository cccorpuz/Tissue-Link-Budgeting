from CSXCAD import ContinuousStructure, ParameterObjects
from openEMS import openEMS
from openEMS.physical_constants import *

from debye import *
import numpy as np
import os
import tempfile
import pandas as pd
from datetime import datetime as dt
from pylab import *

#### FDTD Simulation wrapper ####
def run_fdtd_s11(max_timesteps, f_start, f_stop, f_max, num_points, er1, er2, er3, ur1, ur2, ur3, s1, s2, s3, x, y, z1, z2, z3, unit, fdtd_test_debug, post_proc_only):
    
    f = np.array(linspace(f_start,f_stop,num_points))
    angularf = np.array(2*np.pi*f)
    
    timestamp = dt.now().strftime("%Y-%m-%d_%H-%M-%S")
    print(f'Starting openEMS FDTD at {timestamp}')

    # Setup openEMS
    sim_path = os.path.join(tempfile.gettempdir(), f'layered_dielectrics{timestamp}')
    post_proc_only = False
    print(sim_path)

    FDTD = openEMS(NrTS=max_timesteps, EndCriteria=1e-4)
    # FDTD.SetGaussExcite(0.5*(f_start+f_stop),0.5*(f_stop-f_start))
    FDTD.SetDiracExcite(f_max)
    FDTD.SetBoundaryCond( [ 'PEC', 'PEC', 'PMC', 'PMC', 'MUR', 'MUR' ] )

    # Setup geom & mesh
    CSX = ContinuousStructure()
    FDTD.SetCSX(CSX)

    # XY Mesh
    mesh = CSX.GetGrid()
    mesh.SetDeltaUnit(unit)

    # Resolve er before continuing
    # er3 = er3*np.ones(3)

    resolution = C0/(f_max*np.sqrt(max(max(abs(er1)),max(abs(er2)),max(abs(er3))))) / unit # wavelength in mm

    print(f'Smallest Wavelength: ${resolution} mm')

    # ## Do manual meshing
    mesh.AddLine('x', [0, x])
    mesh.AddLine('y', [0, y])
    mesh.SmoothMeshLines('x', resolution*10*f_max/1e9, ratio=1.5)
    mesh.SmoothMeshLines('y', resolution*10*f_max/1e9, ratio=1.5)

    mesh.AddLine('z', [-1, z1+z2+z3])
    mesh.SmoothMeshLines('z', resolution/200, ratio=1.5)

    mesh.AddLine('z', [0, z1])
    mesh.AddLine('z', [z1+z2, z1+z2+z3])
    mesh.SmoothMeshLines('z', resolution/800, ratio=1.5)


    ## Apply the waveguide port
    ports = []
    start=[0, 0, -1]
    stop =[x, y, 0]
    # mesh.AddLine('z', [start[2], stop[2]])
    ports.append(FDTD.AddRectWaveGuidePort( 0, start, stop, 'z', x*unit, y*unit, 'TE10', excite=1))

    # start=[0, 0, z1+z2+z3]
    # stop =[x, y, z1+z2+z3-1]
    # mesh.AddLine('z', [start[2], stop[2]])
    # ports.append(FDTD.AddRectWaveGuidePort( 1, start, stop, 'z', x*unit, y*unit, 'TE10'))

    ## Material definition for Debye calculations ##

    # Skin
    skin_debye = DebyeParameters(40.936, 23.649, 0.3951, 0.72531, angularf[0], angularf[len(angularf)-1])
    er1 = FirstOrderDebyeEquationEPS(40.936, 23.649, 0.3951, 0.72531, angularf[0], angularf[len(angularf)-1], 0, num_points)
    s1 = FirstOrderDebyeEquationCOND(40.936, 23.649, 0.3951, 0.72531, angularf[0], angularf[len(angularf)-1], 0, num_points)

    # Fat
    fat_debye = DebyeParameters(5.447, 4.0997, 0.17656, 0.27615, angularf[0], angularf[len(angularf)-1])
    er2 = FirstOrderDebyeEquationEPS(5.447, 4.0997, 0.17656, 0.27615, angularf[0], angularf[len(angularf)-1], 0, num_points)
    s2 = FirstOrderDebyeEquationCOND(5.447, 4.0997, 0.17656, 0.27615, angularf[0], angularf[len(angularf)-1], 0, num_points)

    # Muscle
    muscle_debye = DebyeParameters(54.811, 32.98, 0.3208, 0.6682, angularf[0], angularf[len(angularf)-1])
    er3 = FirstOrderDebyeEquationEPS(54.811, 32.98, 0.3208, 0.6682, angularf[0], angularf[len(angularf)-1], 0, num_points)
    s3 = FirstOrderDebyeEquationCOND(54.811, 32.98, 0.3208, 0.6682, angularf[0], angularf[len(angularf)-1], 0, num_points)
    
    
    layer1 = CSX.AddDebyeMaterial( 'skin_debye' , epsilon=skin_debye[0]*np.ones(3), order=1)
    layer1.SetDispersiveMaterialPropertyDir('eps_delta', 0, 0, skin_debye[1])
    layer1.SetDispersiveMaterialPropertyDir('eps_delta', 0, 1, skin_debye[1])
    layer1.SetDispersiveMaterialPropertyDir('eps_delta', 0, 2, skin_debye[1])
    layer1.SetDispersiveMaterialPropertyDir('eps_relax', 0, 0, skin_debye[2])
    layer1.SetDispersiveMaterialPropertyDir('eps_relax', 0, 1, skin_debye[2])
    layer1.SetDispersiveMaterialPropertyDir('eps_relax', 0, 2, skin_debye[2]) 
    start = [0, 0, 0]
    stop  = [x, y, z1]
    # layer1 = CSX.AddMaterial( 'epsilon1', epsilon=er1[0]*np.ones(3))
    layer1.AddBox(start, stop)

    layer2 = CSX.AddDebyeMaterial( 'fat_debye' , epsilon=fat_debye[0]*np.ones(3), order=1)
    layer2.SetDispersiveMaterialPropertyDir('eps_delta', 0, 0, fat_debye[1])
    layer2.SetDispersiveMaterialPropertyDir('eps_delta', 0, 1, fat_debye[1])
    layer2.SetDispersiveMaterialPropertyDir('eps_delta', 0, 2, fat_debye[1])
    layer2.SetDispersiveMaterialPropertyDir('eps_relax', 0, 0, fat_debye[2])
    layer2.SetDispersiveMaterialPropertyDir('eps_relax', 0, 1, fat_debye[2])
    layer2.SetDispersiveMaterialPropertyDir('eps_relax', 0, 2, fat_debye[2])     
    start = [0, 0, z1]
    stop  = [x, y, z1+z2]
    # layer2 = CSX.AddMaterial( 'epsilon1', epsilon=er2[0]*np.ones(3))
    layer2.AddBox(start, stop)

    layer3 = CSX.AddDebyeMaterial( 'muscle_debye' , epsilon=muscle_debye[0]*np.ones(3), order=1)
    layer3.SetDispersiveMaterialPropertyDir('eps_delta', 0, 0, muscle_debye[1])
    layer3.SetDispersiveMaterialPropertyDir('eps_delta', 0, 1, muscle_debye[1])
    layer3.SetDispersiveMaterialPropertyDir('eps_delta', 0, 2, muscle_debye[1])
    layer3.SetDispersiveMaterialPropertyDir('eps_relax', 0, 0, muscle_debye[2])
    layer3.SetDispersiveMaterialPropertyDir('eps_relax', 0, 1, muscle_debye[2])
    layer3.SetDispersiveMaterialPropertyDir('eps_relax', 0, 2, muscle_debye[2])     
    start = [0, 0, z1+z2]
    stop  = [x, y, z1+z2+z3]
    # layer3 = CSX.AddMaterial( 'epsilon1', epsilon=er3)
    layer3.AddBox(start, stop)


    ### Define dump box...
    # Et = CSX.AddDump('Et', file_type=0, sub_sampling=[2,2,2])
    # start = [0, 0, 0];
    # stop  = [x, y, z1+z2+z3];
    # Et.AddBox(start, stop);

    ### Run the simulation
    if fdtd_test_debug:  # debugging only
        CSX_file = os.path.join(sim_path, 'layered_dielectrics.xml')
        CSX_file2 = os.path.join(os.path.dirname(os.path.abspath(__file__)), 'layered_dielectrics.xml')
        if not os.path.exists(sim_path):
            os.mkdir(sim_path)
        CSX.Write2XML(CSX_file)
        CSX.Write2XML(CSX_file2)
        from CSXCAD import AppCSXCAD_BIN
        # NOTE: Change the path to AppCSXCAD_BIN in CSXCAD/__init__.py if needed to "bin/AppCSXCAD"!
        os.system(AppCSXCAD_BIN + ' "{}"'.format(CSX_file))

    if not post_proc_only:
        FDTD.Run(sim_path, cleanup=True)

    ### Postprocessing & plotting
    for port in ports:
        port.CalcPort(sim_path, f)

    s11 = ports[0].uf_ref / ports[0].uf_inc
    # s21 = ports[1].uf_ref / ports[0].uf_inc
    # ZL  = ports[0].uf_tot / ports[0].if_tot
    # ZL_a = ports[0].ZL # analytic waveguide impedance

    fdtd_output = {
        'f' : f,
        's11' : s11
    }

    fdtd_output_DF = pd.DataFrame(fdtd_output)
    fdtd_output = fdtd_output_DF.dropna(inplace=True)

    timestamp = dt.now().strftime("%Y-%m-%d_%H-%M-%S")
    print(f'Finishing up openEMS FDTD at {timestamp}')
    filename = os.path.join(os.path.dirname(os.path.abspath(__file__)), f"results/layered_dielectrics_openEMS_FDTD_{timestamp}.csv")
    fdtd_output_DF.to_csv(filename, index=False)
    print(f'Finishing export to {filename}')

    return s11