#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**main-function assigns a random number and tests whether its
  *greater than zero or less than zero
  *Return: there is no return value.
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
