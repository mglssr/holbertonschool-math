#include "holberton.h"

/**
* display_complex_number - function that displays the complex numbers
* @c: complex number
*/
void display_complex_number(complex c)
{
	printf("%g", c.re);

	if (c.im == 0)
		printf("\n");
	else if (c.im > 0)
	{
		printf(" + ");
		if (c.im == 1)
			printf("i\n");
		else
			printf("%gi\n", c.im);
	}
	else
	{
		printf(" - ");
		if (c.im == -1)
			printf("i\n");
		else
		{
			c.im = c.im * -1;
			printf("%gi\n", c.im);
		}
	}
}
