#include "holberton.h"

/**
* argument - function that returns the argument of a given complex number
* @c: complex number
* Return: argument of complex c
*/

double argument(complex c)
{
	double i, u;

	if (c.re != 0)
		i = c.im / c.re;

	u = atan(i);

	return (u);
}
