#include "main.h"


/** print_times_table - print the n times table starting with 0
 * @n: the number of times table
 *
 * Return: void always
 */

void print_times_table(int n)
{
	int r = 0;
	int c;
	int hundreds;
	int tens;
	int ones;
	int delta = 0;

	if (n < 15 && n > 0)
	{
		while (r < n)
		{
			c = 0, hundreds = 0, tens = 0, ones = 0;
			while (c < n)
			{

				if ( c > 0 && c < n + 1)
				{
					_putchar(',');
					_putchar(' ');
				}
				
				if (ones > 9)
				{
					ones = ones % 10;
					tens++;
					
				}

				if(c > 0)
				{

					if (hundreds == 0)
					{
						_putchar(' ');
					}
					else
					{
						_putchar(hundreds + '0');
					}

					if (tens == 0)
					{
						_putchar(' ');
					}
					else if (tens > 9)
					{
						if (delta > 10)
						{
							tens = tens / 10;
						}
						else
						{
							tens = tens % 10;
						}
						hundreds++;
						_putchar(hundreds + '0');
						_putchar(tens + '0');
					}
					else
					{
						_putchar(tens + '0');
					}

				}
				_putchar(ones + '0');
				ones = ones + delta;
				c++;
			}
			_putchar(10);
			delta++;
			r++;
		}
	}

}
