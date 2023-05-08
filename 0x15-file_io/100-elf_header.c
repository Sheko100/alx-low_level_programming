#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - displays the information contained in
 * the ELF header at the start of an ELF file
 * @ac: arguments count
 * @av: arguments values
 *
 * Return: 0 on success
 * Exit with error on failure
 */

int main(int ac, char **av)
{

	if (ac != 2)
	{
		printf(STDERR_FILENO, "Usage: %s elf_filename\n", av[0]);
		exit(97);
	}
	return (0);
}
