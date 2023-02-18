#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 in (Success)
 */

int main(void)
{
	int l = 97;

	while (l < 123)
	{
		if (l == 101 || l == 113)
		{
			l++;
			continue;
		}

		putchar(l++);
	}

	putchar(10);

	return (0);
}
