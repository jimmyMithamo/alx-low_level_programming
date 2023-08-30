include "main.h"

/**
 * sqrt2 - Makes possible to evaluate from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}

/**
  *_sqrt_recursion - return natural square root of the number
  *@n:number to be squared
  *Return: n raised to power 2
  *-1 returned on error
  */

int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
