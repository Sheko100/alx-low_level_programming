#include <stdio.h>
#include <string.h>
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
 * create_file - creates a file
 * @filename: file name to create
 * @text_content: pointer to a string to write to the file
 *
 * Return: 1 on success
 * -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int flags = O_TRUNC | O_CREAT | O_WRONLY;
	int perms = S_IRUSR | S_IWUSR;

	if (isnull(filename))
		return (-1);

	fd = open(filename, flags, perms);
	if (fd == -1)
		return (-1);

	if (!isnull(text_content))
	{
		if (write(fd, text_content, strlen(text_content)) == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
