#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: arguments count
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int cent;
	int coin = 0;

	if (argc == 2)
	{
		cent = atoi(argv[1]);
		if (cent < 0)
			printf("0\n");
		else
		{
			while (cent != 0)
			{
				if (cent % 25 == 0)
				{ coin += cent / 25;
					cent = cent % 25;
				}
				else if (cent % 10 == 0)
				{ coin += cent / 10;
					cent = cent % 10;
				}
				else if (cent % 5 == 0)
				{ coin += cent / 5;
					cent = cent % 5;

				}
				else if (cent % 1 == 0)
				{
					coin += cent / 1;
					cent = cent % 1;
				}
			}
			printf("%d\n", coin);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
