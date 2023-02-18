#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 in (Success)
 */

int main(void)
{
	int l = 122;

	while (l > 96)
	{
		putchar(l--);
	}

	putchar(10);

	return (0);
}
