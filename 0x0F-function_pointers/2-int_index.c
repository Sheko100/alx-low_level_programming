#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: array size
 * @cmp: pointer to a compare function
 *
 * Return: array index if compare fuction returns true
 * -1 if no integers matched
 *  0 if size greater than or equals 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int index;

	if (size <= 0)
		return (-1);

	while (i < size)
	{
		index = cmp(array[i]);
		if (index)
		{
			return (i);
		}
		i++;
	}

	return (-1);
}
