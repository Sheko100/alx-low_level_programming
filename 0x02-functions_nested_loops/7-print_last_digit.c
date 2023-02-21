#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number which will return its last digit
 *
 * Return: int which is the last digit of a number
 */

int print_last_digit(int n)
{
	int d = n % 10;

	if (d < 0)
	{
		d = d - d - d;
	}
	_putchar(d + '0');
	return (d);
}
