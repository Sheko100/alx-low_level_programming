
/**
 * _strncat - concatenates two strings
 * @dest: string to contact to
 * @src: string which will be concated
 * @n: most bytes to use
 *
 * Return: the string after concating
 */

char *_strncat(char *dest, char *src, int n)
{
	char *destp;
	char *srcp;
	int dest_len = 0;
	int i = 0;

	destp = dest;
	srcp = src;

	while (*(destp + dest_len) != '\0')
	{
		dest_len++;
	}

	while (i < n && *(srcp + i) != '\0')
	{
		*(destp + (dest_len + i)) = *(srcp + i);
		i++;
	}
	*(destp + (dest_len + i)) = '\0';

	return (dest);
}
