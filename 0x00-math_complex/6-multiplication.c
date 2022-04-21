#include "holberton.h"

/**
* multiplication - function that performs the multiplication operation to comp
* @c1: complex number
* @c2: complex number
* @c3: complex number
*/

void multiplication(complex c1, complex c2, complex *c3)
{
	double a_0, a_1, b_0, b_1;

	a_0 = c1.re * c2.re;
	a_1 = c2.re * c1.im;
	b_0 = c1.re * c2.im;
	b_1 = c1.im * c2.re;

	(*c3).im = a_1 + b_0;
	(*c3).re = a_0 - b_1;
}
