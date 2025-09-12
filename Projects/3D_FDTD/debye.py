import numpy as np
from openEMS import openEMS
from openEMS.physical_constants import *



#### Debye parameter function calculation ####
def DebyeParameters(eps_f1, eps_f2, tand_1, tand_2, omega_1, omega_2):
    """Calculate Debye parameters from two frequency points.
    Args:
        eps_f1: Permittivity at frequency omega_1
        eps_f2: Permittivity at frequency omega_2
        tand_1: Loss tangent at frequency omega_1
        tand_2: Loss tangent at frequency omega_2
        omega_1: Angular frequency 1 (rad/s)
        omega_2: Angular frequency 2 (rad/s)
    
    Returns:
        A list containing [eps_inf, eps_delta, t_relax]
    where:
        eps_inf: Permittivity at infinite frequency
        eps_delta: Change in permittivity (eps_s - eps_inf)
        t_relax: Relaxation time (s)

    Note:    
        EPS0 is the permittivity of free space (8.854187817e-12 F/m)
        tand = sigma / (omega * EPS0 * eps)
        s = omega * EPS0 * eps * tand
    """

    eps_s = eps_f1
    s_f1 = omega_1*EPS0*eps_f1*tand_1
    s_f2 = omega_2*EPS0*eps_f2*tand_2 - s_f1
    t_relax = EPS0 * (np.abs(eps_f1-eps_f2) / np.abs(s_f2-s_f1))
    eps_inf = eps_s - np.abs(eps_s - eps_f2) * ((1+(omega_2*t_relax)**2)/(omega_2*t_relax)**2)
    eps_delta = eps_s - eps_inf
    return [eps_inf, eps_delta, t_relax]

def FirstOrderDebyeEquationEPS(eps_f1, eps_f2, tand_1, tand_2, omega_1, omega_2, s_DC, num_points):
    """Calculate complex permittivity using first-order Debye equation.
    Args:
        eps_f1: Permittivity at frequency omega_1
        eps_f2: Permittivity at frequency omega_2
        tand_1: Loss tangent at frequency omega_1
        tand_2: Loss tangent at frequency omega_2
        omega_1: Angular frequency 1 (rad/s)
        omega_2: Angular frequency 2 (rad/s)
        s_DC: DC conductivity (S/m)
        num_points: Number of frequency points to calculate between omega_1 and omega_2
        
    Returns:
        Complex permittivity over a given frequency range.

    Note:
        EPS0 is the permittivity of free space (8.854187817e-12 F/m) 
        omega = 2 * pi * f
   """
    parameters = DebyeParameters(eps_f1, eps_f2, tand_1, tand_2, omega_1, omega_2)
    omega = np.linspace(omega_1, omega_2, num_points)
    return parameters[0] + parameters[1] / (1+1j*omega*parameters[2]) + s_DC/(1j*omega*EPS0)

def FirstOrderDebyeEquationCOND(eps_f1, eps_f2, tand_1, tand_2, omega_1, omega_2, s_DC, num_points):
    """Calculate conductivity using first-order Debye equation.
    Args:
        eps_f1: Permittivity at frequency omega_1
        eps_f2: Permittivity at frequency omega_2
        tand_1: Loss tangent at frequency omega_1
        tand_2: Loss tangent at frequency omega_2
        omega_1: Angular frequency 1 (rad/s)
        omega_2: Angular frequency 2 (rad/s)
        s_DC: DC conductivity (S/m)
        num_points: Number of frequency points to calculate between omega_1 and omega_2
        
    Returns:
        Conductivity over a given frequency range.
    Note:
        EPS0 is the permittivity of free space (8.854187817e-12 F/m)
        omega = 2 * pi * f
    """
    eps_s = eps_f1
    parameters = DebyeParameters(eps_f1, eps_f2, tand_1, tand_2, omega_1, omega_2)
    omega = np.linspace(omega_1, omega_2, num_points)
    return s_DC + (omega**2*EPS0*parameters[2]*(eps_s-parameters[0]))/(1+(omega*parameters[2])**2)