#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number to look into
 * @index: bit index to modify
 *
 * Return: 1 on success
 * -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 32)
		return (-1);

	*n = *n >> index;
	*n += 1;
	*n = *n << index;

	return (1);
}
