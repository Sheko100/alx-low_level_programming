#include <stdio.h>
#include "main.h"

/**
 * deci_to_bin - converts decimal to binary string
 * @n: decimal number to convert
 *
 * Return: pointer to binary string
 */

char *deci_to_bin(unsigned long int n)
{
	int rem = 0;
	char bin[32];
	char *binp;
	int i = 0;

	binp = bin;

	while (n > 0)
	{
		rem = n % 2;
		if (rem == 0)
			bin[i] = '0';
		else if (rem == 1)
			bin[i] = '1';

		n = n / 2;
		i++;
	}
	bin[i] = '\0';

	return (binp);
}

/**
 * get_bit - gets bit value in specific index
 * @n: number to look into
 * @index: bit index
 *
 * Return: bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	char *bin;

	if (n == 0)
		return (0);

	bin = deci_to_bin(n);

	if (bin == NULL)
		return (-1);

	if (bin[index] == '0')
		bit = 0;
	else if (bin[index] == '1')
		bit = 1;

	return (bit);
}
