#include "main.h"
#include <stdio.h>

/**
  *main - prints the number of arguments passed to it
  *@argc: number of arguments passed to the function
  *@argv: arguments vector
  *Return: always 0
  */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n",argc - 1);

	return (0);
}
  
