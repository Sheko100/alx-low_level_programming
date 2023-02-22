#include "main.h"


/**
 * print_times_table - print the n times table starting with 0
 * @n: the number of times table
 *
 * Return: void always
 */

void print_times_table(int n)
{
	int r = n + 1, c, hundreds, tens, ones, delta = 0;

	if (n < 15 && n > 0)
	{
		while (r > 0)
		{
			hundreds = 0, tens = 0, ones = 0, c = n + 1;
			while (c > 0)
			{
				if (ones > 9)
				{
					ones = ones % 10, tens++;
				}
				if (tens > 9)
				{ tens = tens % 10, hundreds++;
				}
				if (hundreds == 0)
				{ _putchar(' ');
				}
				else
				{ _putchar(hundreds + '0');
				}
				if (hundreds == 0 && tens == 0)
				{
					if (c != n + 1)
					{
						_putchar(' ');
					}
				}
				else
				{
					_putchar(tens + '0');
				} _putchar(ones + '0');
				if (c > 1)
				{ _putchar(','), _putchar(' ');
				} ones = ones + delta, c--;
			} _putchar(10), delta++, r--;
		}
	}
}
