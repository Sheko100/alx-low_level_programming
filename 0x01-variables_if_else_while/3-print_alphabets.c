#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 in (Success)
 */

int main(void)
{
	int low_letter = 97;
	int upper_letter = 65;

	while (low_letter < 123)
		putchar(low_letter++);

	while (upper_letter < 91)
		putchar(upper_letter++);

	putchar(10);

	return (0);
}
