#include"main.h"

/**_isupper - function checks whether a character is an upper case letter.
  *
  *@c: character to be checked
  *Return: returns 1 if c is upper case and o otherwise
  */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
