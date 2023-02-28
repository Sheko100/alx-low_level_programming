#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string which will be printed to stdout
 *
 * Return: void
 */

void _puts(char *str)
{
	char *strp;
	int i = 0;

	strp = str;

	while (*(strp + i) != '\0')
	{
		_putchar(*(strp + i));
		i++;
	}
	_putchar(10);
}
