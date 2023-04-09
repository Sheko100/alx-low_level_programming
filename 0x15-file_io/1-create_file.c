#include <stdio.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: the file name
 * @text_content: text to write
 *
 * Return: 1 on success
 * -1 on failure
 */

int create_file(const char *filename, __attribute__((unused))char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = creat(filename, 0600);

	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		if(write(fd, text_content, sizeof (text_content)+1))
			return (-1);
	}

	close(fd);

	return (1);
}
