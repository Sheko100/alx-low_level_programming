#include "main.h"

/**
 * print_alphabet - dispalys the alphabet in lowercase to stdoutput
 *
 * Return: void always
 */

void print_alphabet(void)
{
	int l = 97;

	while (l < 123)
	{
		_putchar(l);
		l++;
	}

	_putchar(10);
}
