#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 in (Success)
 */

int main(void)
{
	int d = 48;

	while (d < 58)
	{
		putchar(d);

		if (d++ != 57)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar(10);

	return (0);
}
