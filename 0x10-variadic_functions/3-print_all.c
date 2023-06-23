#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - prints character
 * @c: char to print
 *
 * Return: void
 */

void print_char(void *c)
{
	printf("%c", *(char *)c);
}

/**
 * print_int - prints integer
 * @n: integer to print
 *
 * Return: void
 */

void print_int(void *n)
{
	printf("%i", *(int *)n);
}

/**
 * print_float - prints float number
 * @f: float number to print
 *
 * Return: void
 */

void print_float(void *f)
{
	printf("%f", *(float *)f);
}

/**
 * print_str - prints string
 * @s: string to print
 *
 * Return: void
 */

void print_str(void *s)
{
	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", (char *)s);
}

/**
 * print_all - prints anything
 * @format: st of types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	frmt frmtspc[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
		{'\0', NULL}
	};
	int i;
	const char *frmtp = format;
	void (*fp)(void *);
	void *arg;


	va_start(ap, format);
	while (*frmtp)
	{
		i = 0;
		while (frmtspc[i].spc)
		{
			if (frmtspc[i].spc == *frmtp)
			{
				arg = va_arg(ap, void *);
				fp = frmtspc[i].fp;
				fp(&arg);
				break;
			}
			i++;
		}
		frmtp++;
	}
	va_end(ap);
	printf("\n");
}
