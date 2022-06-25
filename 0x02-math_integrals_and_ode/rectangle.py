#!/usr/bin/python3
"""Integral de Riemann para [0,1] 1/1+x^2"""


def rectangle(a, b, steps):
    
    integral = 0
    for i in range(steps):
      base = (b - a)/steps
      ar = a + (i * base)
      sum = 1/(1 + ((ar) ** 2)) * base
      integral = integral + sum 

    return integral
