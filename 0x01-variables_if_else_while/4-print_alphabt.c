#include <stdio.h>

/**
  *main - this function print the alphabets skipping letters q and e
  *Return:no return value-function is void
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q' || letter == 'e')
			continue;
		else
			putchar(letter);
	}
	putchar('\n');
	return (0);
}
