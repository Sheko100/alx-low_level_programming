#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: arguments count
 * @argv: arguments values
 *
 * Return: 0 always
 */

int main(int argc, __attribute__((unused))char **argv)
{
	printf("%d\n", argc - 1);

	return (0);
}
