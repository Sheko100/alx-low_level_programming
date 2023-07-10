#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file
 * @letters: number of letters to read
 *
 * Return: number of letters actually read
 * 0 if the file can't be opened of read or filename is NULL
 * or if write fails or didn't write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t readbytes, writebytes;
	int fd;
	char *buf;

	if (filename == NULL || letters == 0)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters);
	if (buf == NULL)
		return (0);

	readbytes = read(fd, buf, letters);
	if (readbytes == -1)
	{
		free(buf);
		return (0);
	}
	close(fd);

	writebytes = write(STDOUT_FILENO, buf, readbytes);
	if (writebytes == -1 || writebytes != readbytes)
	{
		free(buf);
		return (0);
	}

	free(buf);
	return (writebytes);
}
