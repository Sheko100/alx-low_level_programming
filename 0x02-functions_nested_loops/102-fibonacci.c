#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 always
 */

int main(void)
{
	long num1 = 0, num2 = 1, num3 = 0;
	int i = 0;

	while (i < 50)
	{
		num3 = num2 + num1;

		printf("%lu, ", num3);
		num1 = num2;
		num2 = num3;
		i++;
	}

	return (0);
}
