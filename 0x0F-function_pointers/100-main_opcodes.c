#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own
 * @ac: arguments count
 * @av: arguments values
 *
 * Return: 0 always
 */

int main(int ac, char **av)
{
	int opcode[] = {0x55, 0x48, 0x89, 0xe5, 0x48, 0x83, 0xc4, 0x80, 0x89,
		0x7d, 0x8c, 0x48, 0x89, 0x75, 0x80, 0x64, 0x48, 0x8b, 0x04,
		0x25, 0x28, 0x00};
	int i = 0, bytes = 0;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(av[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (i < bytes)
	{
		printf("%02x ", opcode[i]);
		i++;
	}
	printf("\n");
	return (0);
}
