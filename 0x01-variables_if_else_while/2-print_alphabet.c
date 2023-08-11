#include <stdio.h>

/**
  *main -this function prints alphabets a-z in lower case
  *only the putchar  function has been used
  *Return:the function returns 0 since its a void function
  */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
