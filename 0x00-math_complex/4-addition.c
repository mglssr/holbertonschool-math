#include "holberton.h"

/**
* addition - function that calculates the sum of complex numbers
* @c1: complex number
* @c2: complex number
* @c3: complex number, resulto of the sum
*/

void addition(complex c1, complex c2, complex *c3)
{
	(*c3).re = c1.re + c2.re;
	(*c3).im = c1.im + c2.im;
}
