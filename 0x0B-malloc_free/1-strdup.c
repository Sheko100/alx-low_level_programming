#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to store
 *
 * Return: NULL if str = NULL
 * pointer to the string on success
 * NULL if if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *s;
	int size = 0, i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*(str + size))
	{
		size++;
	}


	s = malloc(size + 1);

	if (s == NULL)
	{
		return (NULL);
	}


	while (i < size)
	{
		*(s + i) = *(str + i);
		i++;
	}

	return (s);
}
