#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: arguments count
 * @argv: arguments values
 *
 * Return: 0 always
 */

int main(__attribute__((unused))int argc, char **argv)
{
	while (*argv)
	{
		printf("%s\n", *argv);
		argv++;
	}

	return (0);
}
