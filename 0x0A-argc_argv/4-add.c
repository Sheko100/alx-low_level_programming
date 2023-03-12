#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: arguments count
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum = 0, i = 1, l;

	if (argc > 1)
	{
		while (i < argc)
		{
			l = 0;
			while (argv[i][l])
			{
				if (argv[i][l] < 47 || argv[i][l] > 58)
				{
					printf("Error\n");
					return (1);
				}
				l++;
			}
			sum = sum + atoi(argv[i]);
			i++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
