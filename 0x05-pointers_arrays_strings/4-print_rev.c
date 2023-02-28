#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	char *sp;
	int len = 0;
	int i = 0;

	sp = s;

	while (*(sp + i) != '\0')
	{
		len++;
		i++;
	}

	while (len > 0)
	{
		_putchar(*(sp + (len - 1)));
		len--;
	}
	_putchar(10);

}
