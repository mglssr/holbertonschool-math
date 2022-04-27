#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
    complex c1;

    c1.re = -15;
    c1.im = 10;
    display_complex_number(c1);
    c1.re = 1;
    c1.im = 0;
    display_complex_number(c1);
    return (0);
}
