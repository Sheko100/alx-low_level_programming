#include <stdio.h>

/**
 * main - prints its name
 * @argc: arguments count
 * @argv: arguments values
 *
 * Return: 0 always
 */

int main(__attribute__((unused))int argc, char **argv)
{
	printf("%s\n", argv[0]);

	return (0);
}
