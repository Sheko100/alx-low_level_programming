#include "main.h"

/**
 * _strdup - duplicates string
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string on success
 * NULL if str is NULL or malloc fails
 */

char *_strdup(char *str)
{
	char *s;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	s = malloc(len * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);

	while (i < len)
	{
		s[i] = str[i];
		i++;
	}

	return (s);
}
