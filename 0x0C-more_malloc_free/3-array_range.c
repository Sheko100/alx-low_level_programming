#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: smallest integer
 * @max: biggest integer
 *
 * Return: pointer to allocated array
 * NULL if min bigger than max or malloc fails
 */

int *array_range(int min, int max)
{
	int *arr;
	int i = 0;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));

	if (arr == NULL)
		return (NULL);

	while (min <= max)
	{
		arr[i] = min;
		i++;
		min++;
	}

	return (arr);
}
