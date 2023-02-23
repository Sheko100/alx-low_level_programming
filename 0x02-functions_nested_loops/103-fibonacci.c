#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 always
 */

int main(void)
{
	int num1 = 0, num2 = 1, num3 = 0;

	while (num3 < 4000000)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;

		printf("%d", num3);

		if (num3 != 5702887)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
	}

	return (0);
}
