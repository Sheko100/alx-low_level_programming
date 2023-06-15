#include "main.h"

/**
 * getlen - gets string length
 * @s: string
 *
 * Return: string length
 */

int getlen(char *s)
{
	int len = 0;

	if (s != NULL)
	{
		while (s[len])
			len++;
	}

	return (len);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: string to concat to
 * @s2: string to concat
 * @n: number of chars to concat
 *
 * Return: the concated string on success
 * NULL if malloc fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int s2len, s2bytes, i = 0, l = 0;

	s2len = getlen(s2);
	s2bytes = n >= s2len ? s2len : n;

	str = malloc(getlen(s1) + s2bytes + 1);
	if (str == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		while (*s1)
		{
			str[i] = *s1;
			i++;
			s1++;
		}
	}

	while (l < s2bytes)
	{
		str[i] = s2[l];
		i++;
		l++;
	}
	str[i] = '\0';
	return (str);
}
