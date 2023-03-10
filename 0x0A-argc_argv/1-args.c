#include <stdio.h>
/**
 * main - prints the arguments count
 * @argc: arguments count
 * @argv: array of arguments strings
 *
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}

