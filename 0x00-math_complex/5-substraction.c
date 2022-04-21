#include "holberton.h"

/**
* substraction - function that performs the substraction operation to complex
* @c1: complex number
* @c2: complex number
* @c3: complex number, result of the operation
*/

void substraction(complex c1, complex c2, complex *c3)
{
	c2.re = c2.re * -1;
	c2.im = c2.im * -1;

	(*c3).re = c1.re + c2.re;
	(*c3).im = c1.im + c2.im;
}
