#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the file name
 * @text_content: text to write
 *
 * Return: 1 on success
 * -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND, 0);

	if (fd == -1)
		return (-1);

	if (write(fd, text_content, strlen(text_content)) == -1)
		return (-1);

	close(fd);

	return (1);
}
