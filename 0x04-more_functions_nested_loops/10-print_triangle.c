#include "main.h"

/**
 * print_triangle - prints hashes diagonally
 * @size: number of rows
 *
 * Return: void
 */

void print_triangle(int size)
{
	int space;
	int h;
	int i = 1;

	if (size > 0)
	{
		while (i <= size)
		{
			space = size - i;
			h = size - space;
			while (space > 0)
			{
				_putchar(' ');
				space--;
			}
			while (h > 0)
			{
				_putchar('#');
				h--;
			}
			_putchar(10);
			i++;
		}
	}
	else
	{
		_putchar(10);
	}
}
