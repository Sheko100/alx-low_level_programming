#include "main.h"

/**
 * _isupper - checks if the letter is uppercase
 *@c: the character which will be checked
 *
 * Return: 1 if uppercase
 * 0 in all other cases
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
