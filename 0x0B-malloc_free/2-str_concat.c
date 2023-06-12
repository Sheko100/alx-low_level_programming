#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string to concat to
 * @s2: string to concat
 *
 * Return: pointer to the whole string on success
 * NULL if malloc fails
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int  i = 0, len1 = 0, len2 = 0;

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	str = malloc((len1 + len2) * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);

	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < len2)
	{
		str[len1] = s2[i];
		len1++;
		i++;
	}
	str[len1] = '\0';

	return (str);

}
