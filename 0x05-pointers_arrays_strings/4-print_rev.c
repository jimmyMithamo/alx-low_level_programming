#include "main.h"

/**
  *print_rev - prints the string in reverse order
  *@s:pointer to the string
  *Return:nothing
  */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (i = i - 1; s[i] != '\0'; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
