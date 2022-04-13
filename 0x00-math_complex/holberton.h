#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.>

/**
* struct complex
* @c_re: real part of a complex
* @c_im: imaginary part of a complex
*/

typedef struct comple_x
{
  double float c_re;
  double float c_im;
}
comp_lex;

void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);
double argument(complex c);
void addition(complex c1, complex c2, complex *c3);
void substraction(complex c1, complex c2, complex *c3);
void multiplication(complex c1, complex c2, complex *c3);
void division(complex c1, complex c2, complex *c3);
void complex_from_mod_arg (double m, double arg, complex *c3);

#endif

