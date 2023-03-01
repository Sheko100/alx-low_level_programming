#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 *  to the buffer pointed to by dest
 *  @dest: string array which will get the copy
 *  @src: string array to copy from
 *
 *  Return: the pointer to the string array which copied to
 */

char *_strcpy(char *dest, char *src)
{
	char *destp;
	char *srcp;
	int len = 0, l = 0;

	destp = dest;
	srcp = src;

	while (*(src + len) != '\0')
	{
		len++;
	}
	while (l < len)
	{
		*(destp + l) = *(srcp + l);
		l++;
	}
	*(destp + (l + 1)) = '\0';

	return (destp);
}
