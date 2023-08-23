#include "main.h"

/**
  *string_toupper - converts all elements of a string to upper case
  *@s: string to be converted
  *Return: converted string
  */

char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			*(s + i) = *(s + i) - 32;
		}
		i++;
	}
	return (s);
}
