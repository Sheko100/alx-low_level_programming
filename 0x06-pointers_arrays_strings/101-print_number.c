#include "main.h"

/** 
 * print_number - prints an integer
 * @n: integer to print
 *
 * Return: void
 */

void print_number(int n)
{
	int numtoprint, remain;

	while (n > 0)
	{
		if (n % 10 == 0)
		{
			_putchar('0');
			n = n / 10;
		}
		else
		{
			numtoprint = n % 10;
			_putchar(numtoprint + '0');
			remain = n - numtoprint;
			if (remain % 10 == 0)
			{
				n = n / 10;
			}
			else
			{
				n = n - numtoprint;
			}
		}
	}
}
