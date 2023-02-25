#include "main.h"

/**
 * print_square - prints number of hash character in rows and columns
 * @size: number of rows and columns
 *
 * Return: void
 */

void print_square(int size)
{
	int r = 0;
	int c;

	if (size > 0)
	{
		while (r < size)
		{
			c = 0;
			while (c < size)
			{
				_putchar('#');
				c++;
			}
			r++;
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
