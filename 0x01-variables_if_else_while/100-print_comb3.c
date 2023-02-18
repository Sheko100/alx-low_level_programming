#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 in (Success)
 */

int main(void)
{
	int ones = 49;
	int tens = 48;

	while (ones < 58 && tens < 58)
	{

		if (tens != ones && tens < ones)
		{
			putchar(tens);
			putchar(ones);

			if (tens != 56 || ones != 57)
			{
				putchar(44);
				putchar(32);
			}
		}

		if (ones == 57)
		{
			ones = 49;
			tens++;
		}
		else
		{
			ones++;
		}
	}

	putchar(10);

	return (0);
}
