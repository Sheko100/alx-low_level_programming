#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 in (Success)
 */

int main(void)
{
	int hundreds = 48;
	int tens = 49;
	int ones = 50;

	while (hundreds < 58 && tens < 58 && ones < 58)
	{
		if (hundreds != tens && hundreds != ones && tens != ones
			&& hundreds < tens && tens < ones)
		{
		putchar(hundreds);
		putchar(tens);
		putchar(ones);

		if (hundreds != 55 || tens != 56 || ones != 57)
		{
			putchar(44);
			putchar(32);
		}
		}

		if (ones == 57)
		{
			ones = 48;
			tens++;
		}
		else
		{
			ones++;
		}

		if (tens == 57)
		{
			tens = 48;
			hundreds++;
		}
	}

	putchar(10);

	return (0);
}
