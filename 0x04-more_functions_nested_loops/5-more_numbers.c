#include "main.h"

/**
  *more_numbers - prints numbers 0-14 ten times
  *_putchar - prints the character on the console
  *Return: void
  */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
