#include "main.h"

/**
  *print_line - prnts line using -
  *_putchar - prints the character to the console
  *@n: integer that determines size of line
  *Return: void
  */

void print_line(int n)
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');

}

