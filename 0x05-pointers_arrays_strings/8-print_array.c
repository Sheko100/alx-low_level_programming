#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line
 * @a: array of integers
 * @n: number of array elements
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int *ap;
	int i = 0;

	ap = a;

	while (i < n)
	{
		printf("%d", *(ap + i));
		if (i != n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
