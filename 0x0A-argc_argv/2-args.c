#include <stdio.h>

/**
 * main - prints arguments
 * @argc: arguments count
 * @argv: array of arguments strings
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
