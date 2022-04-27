#include "holberton.h"

/**
* function that performs the division operation to complex numbers.
* @c1: numerator complex
* @c2: denominator complex
* @c3: quotient complex
*/

void division(complex c1, complex c2, complex *c3);
{
	complex c2_con;
	double a_0, a_1, a_2, b_0, b_1, z_0, z_1, y_0 y_1;
	double i_re, i_im;

	//conjugada del denominador
	c2_con = conjugate(c2);		
	//producto del numerador (c1) por la conjugada de denom
	a_0 = c1.re * c2_con.re;
	a_1 = c1.re * c2_con.im;
	b_0 = c1.im * c2_con.re;
	b_1 = c1.im * c2_con.im;


	//producto del denom (c2) por su conjugada z_1 + y_0 = bc son opuestos
	z_0 = c2.re * c2_con.re;
	z_1 = c2.re * c2_con.im;
	y_0 = c2.im * c2_con.re;
	y_1 = c2.im * c2_con.re;
	// necesito el opuesto de y_1
	y_1 *= -1;
	a_2 = y_1 + z_0;
	//cociente de real/real y complex/real
	i_re = 
	//definir el complex c3 :D
}
