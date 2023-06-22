#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: variable arguments count
 *
 * Return: void always
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	if (n > 0)
	{
		va_start(ap, n);
		while (i < n)
		{
			printf("%d", va_arg(ap, int));
			if (separator != NULL && i != n - 1)
				printf("%s", separator);
			i++;
		}
		va_end(ap);
		printf("\n");
	}
}
