#include "main.h"

/**
  *_strlen - returns the length of a string
  *@s:pointer to the string
  *Return:length of string
  */

int _strlen(char *s)
{
	int arr_index;

	for (arr_index = 0; s[arr_index] != '\0'; arr_index++)
		;
	return(arr_index);
}
