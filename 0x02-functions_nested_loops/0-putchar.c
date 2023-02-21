#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 in (Success)
 */

int main(void)
{
	char str[9] = "_putchar\n";
	int i = 0;

	while (i < 9)
	{
		_putchar(str[i]);
		i++;
	}

	return (0);
}
