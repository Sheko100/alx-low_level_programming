#include "main.h"

/**
 * create_array - reates an array of chars,
 * and initializes it with a specific char
 * @size: array size
 * @c: initializing character
 *
 * Return: pointer to the array on success
 * NULL if size is 0 or allocating memory fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);

	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
}
