#include "main.h"

/**
 * print_line - prints number of _
 * @n: number of _ to print
 *
 * Return: void
 */

void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}

	}
	_putchar(10);
}
