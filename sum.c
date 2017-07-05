#include<stdio.h>
#include "sum.h"

int sum (int n)
{
  int i;
  int sum= 0;
  for (i=0; i<n; i++)
	sum += i;
  return sum;
}


