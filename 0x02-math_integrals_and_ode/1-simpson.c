#include "simpson.h"

/**
* simpson - function that computes the simpson method to
* calculate  int[0,1] 1 / (1 + x^2)
* @a: integration limit 
* @b: integration limit 
* @steps: number of partition
* Return: approximation of the integral
*/

double simpson(double a, double b, int steps )
{
	double base, integral, sum, sum_, x_n1, x_n2, y_n1, y_n2;
	int n1 = 1, n2 = 2;

	
	base = (b - a) / steps;
	while (n1 < steps)
	{
		x_n1 = a + (n1 * base);
		y_n1 = function(x_n1);
		sum = sum + y_n1;
		n1 += 2;
	}
	sum = sum * 4;
	while (n2 < steps)
	{
		x_n2 = a + (n2 * base);
		y_n2 = function(x_n2);
		sum_ = sum_ + y_n2;
		n2 += 2;
	}
	sum_ = sum_ * 2;

	integral = ((base / 3) * (function(a) + function(b) + sum + sum_));
	return (integral);
}

/**
* function - function we want to know the integral of
* @x: parameter
* Return: f(x)
*/
double function(double x)
{
	return (1 / (1 + (x * x)));
}
