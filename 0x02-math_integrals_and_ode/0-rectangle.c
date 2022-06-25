#include "rectangle.h"
#include <math.h>

/**
* rectangle_method - function that computes the rectangle method to calculate
* int[0,1] 1/ (1 + x^2)
* @a: integration limit
* @b: integration limit
* @steps: number of partitions
* Return: approximation of the integral
*/

double rectangle_method(double a, double b, int steps)
{
	double integral = 0, base, sum, xi;
	int i = 0;

	while (i < steps)
	{
		base = (b - a) / steps;
		xi = a + (i * base);
		sum = 1 / (1 + ((xi) * (xi))) * base;
		integral = integral + sum;
		i++;
	}
	return (integral);
}
