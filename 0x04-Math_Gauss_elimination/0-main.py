#!/usr/bin/python3

import numpy as np
gaussian_elimination = __import__('0-gaussian_elimination').gaussian_elimination

if __name__ == "__main__":  
  A = [[2, 1, -1], [3, 2, 1], [2, -1, 2]]
  b = [1, 10, 6]
  print("The matrix A:\n",A)
  print("The vector b:\n",b)
  print("The solution of the linear system using Gauss eluimination algorithm\n",gaussian_elimination(A,b))

  A = [[1, 1, -1], [2, -1, 1], [-1, 2, 2]]
  b = [-2, 5, 1]
  print("The matrix A:\n",A)
  print("The vector b:\n",b)
  print("The solution of the linear system using Gauss eluimination algorithm\n",gaussian_elimination(A,b))

  A = [[1, 1, 1], [1, 2, 3], [2, 3, 4]]
  b = [-2, 5, 1]
  print("The matrix A:\n",A)
  print("The vector b:\n",b)
  print("The solution of the linear system using Gauss eluimination algorithm\n",gaussian_elimination(A,b))