#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 always
 */

int main(void)
{
	int num1 = 0, num2 = 1, num3 = 0;
	int sum = 0;

	while (num3 < 4000000)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;

		if (num3 % 2 == 0)
		{
			sum += num3;
		}
	}

	printf("%d\n", sum);

	return (0);
}
