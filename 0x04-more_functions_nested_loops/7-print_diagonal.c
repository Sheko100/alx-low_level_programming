#include "main.h"

/**
 * print_diagonal - prints number of digonal \
 * @n: number of \ to print
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0;
	int s;

	if (n > 0)
	{
		while (i < n)
		{
			s = i;
			while (s > 0)
			{
				_putchar(' ');
				s--;
			}
			_putchar(92);
			_putchar(10);

			i++;
		}
	}
	else
	{
		_putchar(10);
	}
}
