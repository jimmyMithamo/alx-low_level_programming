#include "main.h"

/**
  *swap_int- swaps thwo integers
  *@a:address of first integer
  *@b:address of second integer
  *Return:nothing
  */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
