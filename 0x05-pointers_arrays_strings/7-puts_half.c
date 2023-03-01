#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: syting to print its second half
 *
 * Return: void
 */

void puts_half(char *str)
{
	char *strp;
	int len = 0;
	int lastchar;

	strp = str;

	while (*(strp + len) != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		lastchar = len / 2;
	}
	else
	{
		lastchar = (len - 1) / 2;
		lastchar++;
	}

	while (lastchar < len)
	{
		_putchar(*(str + lastchar));
		lastchar++;
	}
	_putchar(10);
}
