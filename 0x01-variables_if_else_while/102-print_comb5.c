#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 in (Success)
 */

int main(void)
{
	int left_tens = 48;
	int left_ones = 48;
	int right_tens = 48;
	int right_ones = 49;

	while (left_tens < 58 && left_ones < 58 && right_tens < 58 && right_ones < 58)
	{
		if (left_tens <= right_tens && left_ones < right_ones)
		{
			putchar(left_tens);
			putchar(left_ones);
			putchar(32);
			putchar(right_tens);
			putchar(right_ones);

			if (left_tens != 57 || left_ones != 56)
			{
				putchar(44);
				putchar(32);
			}

		}

		if (right_tens == 57 && right_ones == 57)
		{
			right_tens = 48;
			left_ones++;
		}

		if (right_ones == 57)
		{
			right_ones = 48;
			right_tens++;
		}
		else
		{
			right_ones++;
		}


		if (left_ones == 57)
		{
			left_ones = 48;
			left_tens++;
		}
	}

	putchar(10);

	return (0);
}
