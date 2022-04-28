#include "holberton.h"
#include <math.h>

/**
* complex_from_mod_arg - function that update the real and the im parts of a
* complex number given its mod and arg.
* @m: modulo
* @arg: argument
* @c3: complex
*/

void complex_from_mod_arg (double m, double arg, complex *c3)
{
	(*c3).re = m * (cos(arg));
	(*c3).im = m * (sin(arg));
}
