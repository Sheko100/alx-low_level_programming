#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *s;

	va_start(ap, n);

	while (i < n)
	{
		s = va_arg(ap, char *);

		if (s)
		{
			printf("%s", s);
		}
		else
		{
			printf("%s", "(nil)");
		}

		if (separator && n - i != 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(ap);

}
