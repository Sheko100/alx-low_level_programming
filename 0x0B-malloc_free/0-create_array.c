#include <stdlib.h>

/**
 * create_array -  creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: intialized character
 *
 * Return: NULL if size = 0
 * pointer to the array
 * NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	arr = malloc(sizeof(char) * size);

	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
