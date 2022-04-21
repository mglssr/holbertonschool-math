#include "holberton.h"

/**
* complex conjugate(complex c)
* @c: complex number
* Return: complex conjugate
*/

complex conjugate(complex c)
{
	c.im = c.im * -1;
	return (c);
}
