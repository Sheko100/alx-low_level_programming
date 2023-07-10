#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: text to append to file
 *
 * Return: 1 on success
 * -1 if any operation failed or filename is NULL
 *  or file does not exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;
	int flags = O_WRONLY | O_APPEND;

	if (filename == NULL)
		return (-1);

	fd = open(filename, flags);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
		if (len > 0 && write(fd, text_content, len) == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
