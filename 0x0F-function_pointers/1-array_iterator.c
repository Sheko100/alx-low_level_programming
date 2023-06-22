#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on array elements
 * @array: pointer to array of integers
 * @size: array size
 * @action: pointer to the executing function
 *
 * Return: void always
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	if (array != NULL || action != NULL)
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
