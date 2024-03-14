#include "search_algos.h"
#include <math.h>

/**
 * min - gets the minimum of two values
 * @num1: first number
 * @num2: second number
 *
 * Return: the minimum number
 */
int min(int num1, int num2)
{
	int min = num1 < num2 ? num1 : num2;

	return (min);
}
/**
 * jump_search - searches for a value in a sorted array of integers using
 * the Jump search algorithm
 * @array: pointer to the array first element
 * @size: array size
 * @value: value to search for
 *
 * Return: the value index on success
 * -1 if the array is null or the value is not found
 */

int jump_search(int *array, size_t size, int value)
{
	int i = 0;
	size_t block = sqrt(size);

	if (array == NULL)
		return (-1);

	while (array[min(block, size) - 1] < value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i = block;
		block += sqrt(size);
		if (i >= size)
			return (-1);
	}
	printf("Value found between indexes [%ld] [%d]\n", block - i, i);

	while (array[i] < value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i++;
		if (i == min(block, size))
			return (-1);
	}

	if (array[i] == value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		return (i);
	}

	return (-1);
}
