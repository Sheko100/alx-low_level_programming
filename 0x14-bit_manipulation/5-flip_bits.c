#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another
 * @n: first numb
 * @m: second num
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;

	n ^= m;
	return (bits);
}
