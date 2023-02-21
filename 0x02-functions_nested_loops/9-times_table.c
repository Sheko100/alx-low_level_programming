#include "main.h"

/**
 * times_table - print the 9 times table
 *
 * Return: void always
 */

void times_table(void)
{
	int r = 0;
	int c;
	int ones;
	int tens;
	int delta = 0;

	while (r < 10)
	{
		c = 0, ones = 0, tens = 0;
		while (c < 10)
		{
			if (c > 0 && c < 10)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (ones > 9)
			{
				ones = ones % 10;
				tens++;
			}
			if (c > 0)
			{
				if (tens > 0)
				{
					_putchar(tens + '0');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar(ones + '0');
			ones = ones + delta;
			c++;
		}
		delta++;
		_putchar(10);
		r++;
	}
}
