#include "main.h"
#include <string.h>

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: text to add to file
 *
 * Return: 1 on success
 * -1 if any operation failed or filename is NULL
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t writebytes;
	mode_t perms = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	fd = creat(filename, perms);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
		if (len > 0)
		{
			writebytes = write(fd, text_content, len);
			if (writebytes == -1)
				return (-1);
		}
	}
	return (1);
}
