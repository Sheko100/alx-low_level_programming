#include "main.h"

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
 * read_textfile - reads file and write content to the standard output
 * @filename: path to the file
 * @letters: letters count to read
 *
 * Return: number of written letters on success
 * 0 on errors
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, readlen, writelen;
	char buf[1024];

	if (isnull(filename))
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	readlen = read(fd, buf, letters);
	if (readlen == -1)
		return (0);

	writelen = write(STDOUT_FILENO, buf, readlen);
	if (writelen == -1 || writelen != readlen)
		return (0);

	close(fd);

	return (writelen);
}
