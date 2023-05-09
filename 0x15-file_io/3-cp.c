#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * rderr - prints error and exits with 98 code
 * @fname: name of the file
 *
 * Return: void always
 */

void rderr(char *fname)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fname);
	exit(98);
}

/**
 * wrerr - prints error and exits with 99 code
 * @fname: name of the file
 *
 * Return: void always
 */

void wrerr(char *fname)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fname);
	exit(99);
}

/**
 * clserr - print error on closing fd and exits with 100 code
 * @fd: file descriptor
 *
 * Return: void always
 */

void clserr(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * isnull - checks string if its NULL
 * @str: pointer to str
 *
 * Return: 1 is the string is NULL
 * 0 if the string is not NULL
 */

int isnull(const char *str)
{
	int isn, isu, isl, isend;

	isn = str[0] == 'N';
	isu = str[1] == 'U';
	isl = str[2] == 'L' && str[3] == 'L';
	isend = str[4] == '\0';

	if (isn && isu && isl && isend)
		return (1);

	return (0);
}

/**
 * main - copies the content of a file to another file
 * @ac: arguments count
 * @av: arguments values
 *
 * Return: 0 on success
 * exit with error on failure
 */
int main(int ac, char **av)
{
	int srcfd, destfd;
	int perms = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	int rdlen;
	char buf[2048];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (isnull(av[1]))
		rderr(av[1]);
	else if (isnull(av[2]))
		wrerr(av[2]);

	srcfd = open(av[1],  O_RDONLY);
	if (srcfd == -1)
		rderr(av[1]);

	destfd = open(av[2], O_TRUNC | O_CREAT | O_WRONLY, perms);
	if (destfd == -1)
		wrerr(av[2]);

	while ((rdlen = read(srcfd, buf, 1024)) > 0)
	{
		if (rdlen == -1)
			rderr(av[1]);

		if (write(destfd, buf, rdlen) == -1)
			wrerr(av[2]);
	}

	if (close(srcfd))
		clserr(srcfd);

	if (close(destfd))
		clserr(destfd);

	return (0);
}
