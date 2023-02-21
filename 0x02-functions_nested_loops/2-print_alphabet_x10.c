#include "main.h"

/**
 * print_alphabet_x10 - displays alphabets in lowercase 10 times
 *
 * Return: void always
 */

void print_alphabet_x10(void)
{
	int i = 0;
	int l;

	while (i < 10)
	{
		l = 97;

		while (l < 123)
		{
			_putchar(l);
			l++;
		}

		_putchar(10);
		i++;
	}

}
