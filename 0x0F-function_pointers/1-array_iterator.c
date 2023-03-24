#include "function_pointers.h"

/**
 * array_iterator - executes a function given as
 * a parameter on each element of an array
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	if (array && action)
	{
		while (i < size)
		{
			(*action)(array[i]);
			i++;
		}
	}
}
