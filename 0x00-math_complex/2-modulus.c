#include "holberton.h"

/**
* modulus - function that calculates the modulus of a given complex
* @c: complex number
* Return: modulus of the complex
*/

double modulus(complex c)
{
	double i, u;

	i = pow(c.re, 2) + pow(c.im, 2);
	u = sqrt(i);
	return (u);
}
