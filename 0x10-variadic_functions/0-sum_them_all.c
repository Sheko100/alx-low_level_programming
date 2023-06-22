#include "variadic_functions.h"

/**
 * sum_them_all - sums all of its parameters
 * @n: variable arguments count
 *
 * Return: sum of all variable arguments
 * 0 if n is zero
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int res = 0;
	va_list ap;

	if (n > 0)
	{
		va_start(ap, n);

		while (i < n)
		{
			res += va_arg(ap, int);
			i++;
		}
		va_end(ap);
	}
	return (res);
}
