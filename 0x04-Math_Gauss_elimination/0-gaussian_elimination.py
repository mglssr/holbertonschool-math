#!/usr/bin/env python3
"""function that returns the solution of the linear ecuation"""


import numpy as np


def gaussian_elimination(A, b):
    try:
        return np.linalg.solve(A, b)
    except np.linalg.linalg.LinAlgError:
        print("You can't divide by zero!")
        return None
