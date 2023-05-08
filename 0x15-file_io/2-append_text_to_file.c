#include <stdio.h>
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
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: text to append
 *
 * Return: 1 on success
 * -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (isnull(filename))
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (!isnull(text_content))
	{
		if (write(fd, text_content, strlen(text_content)) == -1)
			return (-1);
	}

	if (close(fd) == -1)
		return (-1);

	return (1);
}
