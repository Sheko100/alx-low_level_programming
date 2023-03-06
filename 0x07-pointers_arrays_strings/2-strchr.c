#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: string to check
 * @c: character to look for
 *
 * Return: pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}

	if (c == '\0')
	{
		return (s + i + 1);
	}
	return (NULL);
}
