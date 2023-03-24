#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to array
 * @size: size of array
 * @cmp: pointer to function
 *
 * Return: first element index if elemnt found
 * -1 if no element matches or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	
	if (array && cmp)
	{
		while (i < size)
		{
			if ((*cmp)(array[i]))
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
