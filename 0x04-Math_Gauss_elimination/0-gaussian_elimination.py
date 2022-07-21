#!/usr/bin/python3
"""function that returns the solution of the linear ecuation"""


import numpy as np

def gaussian_elimination(A, b):
    return np.linalg.solve(A, b)