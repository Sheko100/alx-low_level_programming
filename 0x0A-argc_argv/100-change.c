#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount of money
 * @argc: arguments count
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int cent;
	int coin = 0;

	if (argc == 1)
	{
		cent = atoi(argv[1]);
		if (cent < 0)
		{
			printf("0\n");
		}
		else
		{
			while (cent != 0)
			{
				if (cent % 25 == 0)
				{
					coin = cent / 25;
				}
				else if (cent % 10 == 0)
				{
					coin = cent / 10;
				}

			}
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
