#include <stdio.h>
#include "main.h"

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
	if (readlen == 0)
		return (0);

	writelen = write(STDOUT_FILENO, buf, readlen);
	if (writelen != readlen)
		return (0);


	return (writelen);
}
