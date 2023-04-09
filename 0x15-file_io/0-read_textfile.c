#include "main.h"

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output
 * @filename: file name to read
 * @letters: number of letters
 *
 * Return: number of letters
 * 0 if the file can't be opened or
 * the filename is null or
 * write function fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n;
	char buf[1000000];

	fd = open(filename, O_RDWR, 0);

	if (fd < 0)
		return (0);

	if (read(fd, buf, letters) <= 0)
		return (0);
	/*
	 * Check all the cases
	 */

	n = write(STDOUT_FILENO, buf, letters);

	if (n <= 0)
		return (0);

	close(fd);

	return (n);
}
