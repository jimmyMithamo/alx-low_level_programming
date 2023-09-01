#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - multiplies two numbers
  * @argc: argument count
  * @argv: array of arguments
  * Return:0 on success and 1 on failure
  */

int main(int argc, char *argv[])
{
	int num_1;
	int num_2;

	if (argc == 3)
	{
		num_1 = atoi(argv[1]);
		num_2 = atoi(argv[2]);

		printf("%d\n", num_1 * num_2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
