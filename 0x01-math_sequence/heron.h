#ifndef HERON_H
#define HERON_H
#include <stdio.h>

/**
* struct heron_s - single linked list
* @x_n: double
* @next: points to the next node
*/
typedef struct heron_s
{
  double x_n;
  struct heron_s *next;
} heron_t;

t_cell *heron(double p, double x0);
#endif
