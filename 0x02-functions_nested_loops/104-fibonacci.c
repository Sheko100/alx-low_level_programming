#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 always
 */

int main(void)
{
	int i = 0;
	long num1 = 0, num2 = 1, num3 = 0;

	while (i < 98)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;

		printf("%lu", num3);
		if (i != 97)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
		i++;
	}

	return (0);
}
