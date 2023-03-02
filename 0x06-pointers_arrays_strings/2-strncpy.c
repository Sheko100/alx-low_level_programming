
/**
 * _strncpy - copies a string
 * @dest: string to copy to
 * @src: string to copy from
 * @n: src number of bytes to copy
 *
 * Return: pointer to the dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *destp;
	char *srcp;
	int i = 0;

	destp = dest;
	srcp = src;

	while (i < n && *(srcp + i) != '\0')
	{
		*(destp + i) = *(srcp + i);
		i++;
	}

	while (i < n)
	{
		*(destp + i) = '\0';
		i++;
	}

	return (dest);
}
