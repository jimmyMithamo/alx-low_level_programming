#include <stdarg.h>
#include "variadic_functions.h"

/**
  *sum_them_all - sums all its parameters
  *@const unsigned int n:parameters count
  *@...: Variable arguments (variadic)
  *
  *Return:sum of the parameters
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list pars;
	int i;
	int sum;

	va_start(pars, n);
	if n == 0:
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(pars, int);
	}
	va_end(pars);

	return (sum);
}

