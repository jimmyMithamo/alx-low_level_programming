#include "main.h"

/**
  *_puts - writes a string in the std output
  *@s:pointer to the string
  *Return:nothing
  */

void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
