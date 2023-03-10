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
	int sum = 0, i = 1;

	if (argc > 1)
	{
		while (i < argc)
		{
			if (*argv[i] > 47 && *argv[i] < 58)
			{
			sum = sum + atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
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
