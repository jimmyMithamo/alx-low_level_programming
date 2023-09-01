#include <stdio.h>
#include "main.h"

/**main - prints the name of this program
  *@argc:number of arguments provided inthe function
  *@argv:array of string arguments provided
  *Return:returns 0 on success and any other number on failure
  */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s \n", argv[0]);

	return (0);
}
