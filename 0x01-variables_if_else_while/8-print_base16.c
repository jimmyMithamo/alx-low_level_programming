#include <stdio.h>

/**
  *main - function prints all numbers od base 16 in lowercase
  *Return: always return a zero
 */

int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		char hexChar = (i < 10) ? ('0' + i) : ('a' + i - 10);
	        putchar(hexChar);
	}
	putchar('\n');
	return 0;
}
