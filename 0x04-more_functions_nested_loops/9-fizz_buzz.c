#include <stdio.h>

/**
  *main - prints 1 to 100.
  *prints fizz for numbers which are multiples of 3
  *prints buzz for numbers multiples of 5
  *prints fizbuzz for numbers multiples of both 3 and 5
  *Return: always 0
  */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 15) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
