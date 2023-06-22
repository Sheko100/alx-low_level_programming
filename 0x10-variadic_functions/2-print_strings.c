#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be prtinted between strings
 * @n: variable arguments count
 *
 * Return: void always
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *str;

	if (n > 0)
	{
		va_start(ap, n);
		while (i < n)
		{
			str = va_arg(ap, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
			if (separator != NULL && i != n - 1)
				printf("%s", separator);
			i++;
		}
		va_end(ap);
		putchar('\n');
	}
}
