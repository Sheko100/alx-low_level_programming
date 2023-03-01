
/**
 * _strcat - concatenates two strings
 * @dest: strimg to concat to
 * @src: string which will be concated
 *
 * Return: pointer for full string after the concating
 */

char *_strcat(char *dest, char *src)
{
	char *destp;
	char *srcp;
	int dest_len = 0, src_len = 0;
	int str_len;
	int i = 0;

	destp = dest;
	srcp = src;

	while (*(destp + dest_len) != '\0')
	{
		dest_len++;
	}

	while (*(srcp + src_len) != '\0')
	{
		src_len++;
	}
	str_len = dest_len + src_len;
	while (dest_len < str_len)
	{
		*(destp + dest_len) = *(srcp + i);
		dest_len++;
		i++;
	}
	*(destp + dest_len) = '\0';

	return (destp);
}
