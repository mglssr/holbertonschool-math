#!/usr/bin/python3
"""Integral of f(x) = 1 / (1 + x^2) using the Simpson Method"""


def simpson_method(a, b, steps):

    h = (b - a) / steps
    n1 = 1
    n2 = 2
    z = 0
    f = 0
    
    while n2 < steps:
        x_n1 = a + (n2 * h)
        c = function(x_n1)
        z = z + c
        n2 += 2

    while n1 < steps:
	x_n = a + (n1 * h)
	e = function(x_n)
	f = f + e
	n1 += 2
  
	f = 4 * f
	z = z * 2

	s = ((h / 3) * (function(a) + function(b) + z + f))
	return s

def function(x):
	return (1 / (1 + (x * x)))


"""a"""
a = simpson_method(0, 1, 7)
print(a)
