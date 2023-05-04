#include "main.h"

/**
 * getlen - returns string length
 * @s: pointer to string
 *
 * Return: length number
 */

int getlen(const char *s)
{
	int len = 0;

	while (s[len])
	{
		len++;
	}

	return (len);
}

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
 * binary_to_uint - converts binary string to positive number
 * @b: pointer to binary string
 *
 * Return: the converted decimal positive number
 */

unsigned int binary_to_uint(const char *b)
{

	unsigned int num = 0;
	unsigned int pwr = 0;
	int len, i;

	len = getlen(b);
	i = len - 1;

	if (b == NULL)
		return (0);

	while (i >= 0)
	{
		if (b[i] == '1')
		{
			if (i != len - 1)
				num += twopwrof(pwr);
			else
				num += 1;
		}
		else if (b[i] != '0')
			return (0);
		i--;
		pwr++;
	}

	return (num);
}
