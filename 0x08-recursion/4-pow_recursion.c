#include "main.h"

/**
  *_pow_recursion - returns thepoer of a digit
  *@x:value to be raised
  *@y:power
  *Return:x raised to power y
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y-1));
}
