#include "main.h"

/**
  *_isdigit - function checks whether a character is a digit.
  *
  *@c: character to be checked
  *Return: returns 1 if c is a digit and 0 otherwise
  */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
