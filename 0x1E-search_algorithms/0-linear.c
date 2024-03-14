#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using
 * the Linear search algorithm
 *
 * @array: pointer to the first element of the array
 * @size: the array number of elements
 * @value: the value to search for
 *
 * Return: the first index where the value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}

	return (-1);
}
