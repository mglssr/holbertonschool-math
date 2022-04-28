#include "holberton.h"

/**
* function that performs the division operation to complex numbers.
* @c1: numerator complex
* @c2: denominator complex
* @c3: quotient complex
*/

void division(complex c1, complex c2, complex *c3)
{
	double a, b, c, d, i, j, k;

	a = c1.re;
	b = c1.im;
	c = c2.re;
	d = c2.im;

	i = (a * c) + (b * d);
	j = (b * c) - (a * d);

	k = (c * c) + (d * d);

	(*c3).re = i / k;
	(*c3).im = j / k;
}
