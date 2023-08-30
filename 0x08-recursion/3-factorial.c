#include "main.h"

/**
  *factorial - returns factorial of a given number
  *@n:the number of the factorial
  *Return: returns the factorial of the number and -1 to show error when n<0
  */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
