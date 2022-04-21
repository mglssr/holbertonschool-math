#include "holberton.h"

/**
* conjugate - function that returns the conjugate of a given complex
* @c: complex number
* Return: complex conjugate
*/

complex conjugate(complex c)
{
	c.im = c.im * -1;
	return (c);
}
