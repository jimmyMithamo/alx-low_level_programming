#include "main.h"

/**
  *more_numbers - prints numbers 0-14 ten times
  *_putchar - prints the character on the console
  *Return: void
  */

void more_numbers(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
