#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 always
 */

int main(void)
{
	int sum = 0;
	int n = 0;

	while (n < 1024)
	{
		if (n % 3 == 0)
		{
			sum += n;
		}
		else if (n % 5  == 0)
		{
			sum += n;
		}
		n++;
	}

	printf("%d\n", sum);

	return (0);
}
