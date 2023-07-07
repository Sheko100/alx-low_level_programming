#include "main.h"
#include <string.h>

/**
 * twopwrof - computes the result of two power of n
 * @n: power value
 *
 * Return: the result of two power n
 */
unsigned int twopwrof(unsigned int n)
{
	unsigned int res = 2;

	while (n > 1)
	{
		res = 2 * res;
		n--;
	}
	return (res);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of binary number
 *
 * Return: decimal number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	unsigned int pwr = 0;
	int i, len;

	if (b != NULL)
	{
		len = strlen(b);
		i = len - 1;
		while (i >= 0)
		{
			if (b[i] == '1')
			{
				if (i != len - 1)
					n += twopwrof(pwr);
				else
					n += 1;
			}
			else if (b[i] != '0')
				return (0);
			i--;
			pwr++;
		}
	}

	return (n);
}
