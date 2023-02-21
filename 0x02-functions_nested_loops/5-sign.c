#include "main.h"

/**
 * print_sign - print the sign of the number
 * @n: the number which will print its sign
 *
 * Return: 1 in if the number is poisitive
 * 0 if the number is zero
 * -1 if the number is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
