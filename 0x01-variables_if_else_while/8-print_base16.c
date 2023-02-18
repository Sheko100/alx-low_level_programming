#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 in (Success)
 */

int main(void)
{
	int hexd = 48;
	int hexl = 97;

	while (hexd < 58)
	{
	putchar(hexd++);
	}

	while (hexl < 103)
	{
	putchar(hexl++);
	}

	putchar(10);

	return (0);
}
