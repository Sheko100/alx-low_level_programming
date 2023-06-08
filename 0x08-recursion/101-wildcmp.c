#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: first string
 * @s2 second string
 *
 * Return: 1 if strings are identical
 * 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 != *s2)
		return (0);

	return (1);
}
