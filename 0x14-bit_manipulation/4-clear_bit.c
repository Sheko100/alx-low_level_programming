#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number to look into
 * @index: bit index to modify
 *
 * Return: 1 on success
 * -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index >= 32)
		return (-1);

	if (*n == 0)
		return (1);

	*n ^= 1UL << index;
	return (1);
}
