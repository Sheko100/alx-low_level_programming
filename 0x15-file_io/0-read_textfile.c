#include "main.h"

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

	if (filename == NULL)
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


	return (writelen);
}
