#include "holberton.h"

/**
* display_complex_number - function that displays the complex numbers
* @c: comlex number
*/
void display_complex_number(complex c)
{
	printf("%1.f + %1.fi\n", c.re, c.im);
}
