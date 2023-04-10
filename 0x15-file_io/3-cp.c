#include <stdio.h>
#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: arguments count
 * @argv: arguments values
 *
 * Return: 0
 */


int main(int argc, char **argv)
{
	int src, dest;
	char buf[1024];
	int len;
	int perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc < 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, perm);
	len = read(src, buf, 1024);
	if (src == -1 || len == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}
	if (write(dest, buf, len) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
		exit(99);
	}
	if (close(src) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", src);
		exit(100);
	}
	if (close(dest))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", dest);
		exit(100);
	}
	return (0);
}
