#include "main.h"

/**
  *reverse_array - reverses an array
  *@a:array to be reversed
  *@n:size of the array
  *Return:reversed array
  */

void reverse_array(int *a, int n)
{
	int rev, start, end;

	start = 0;
	end = n-1;
	while (start < end)
	{
		rev = *(a + start);
		*(a + start) = *(a + end);
		*(a + end) = rev;
		start++;
		end--;
	}
}
