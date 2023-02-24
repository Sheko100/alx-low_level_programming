#include "main.h"

/**
 * more_numbers - prints nmubers ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int i = 0;
	int ones, tens;
	int n;

	while (i < 10)
	{
		ones = 0;
		tens = 0;
		n = 0;
		while (n < 15)
		{
			if (ones > 9)
			{
				ones = ones % 10;
				tens++;
			}

			if (tens > 0)
			{
				_putchar(tens + '0');
			}

			_putchar(ones + '0');
			ones++;
			n++;
		}
		_putchar(10);
		i++;
	}
}
