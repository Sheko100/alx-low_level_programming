#include "main.h"

/**
 * remain - gets the remained number after reducing by 2
 * @n: number to get the remainder
 *
 * Return: remainder of n
 * -1 if the input is 0
 */
int remain(unsigned long int n)
{
	if (n == 1)
		return (1);
	else if (n == 0)
		return (-1);
	while (n > 2)
	{
		n = n - 2;
		if (n == 1)
			return (1);
	}
	return (0);
}

/**
 * dividebytwo - divide a number by 2
 * @n: number to divide by 2
 *
 * Return: division result
 */
int dividebytwo(unsigned long int n)
{
	int i = 0;

	while (n > 1)
	{
		n -= 2;
		i++;
	}
	return (i);
}

/**
 * print_binary - converts decimal to binary and prints it
 * @n: decimal number to convert
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int rem;
	char zero = 48;
	char one = 49;

	if (n == 0)
	{
		write(1, &zero, 1);
		return;
	}
	rem = remain(n);
	n = dividebytwo(n);
	if (n > 0)
		print_binary(n);
	if (rem == 0)
		write(1, &zero, 1);
	else if (rem == 1)
		write(1, &one, 1);
}
