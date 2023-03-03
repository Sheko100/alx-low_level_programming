
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string to convert to uppercase
 *
 * Return: string in uppercase
 */

char *string_toupper(char *str)
{
	char *strp;
	int i = 0;

	strp = str;
	while (*(strp + i))
	{
		if (*(strp + i) > 96 && *(strp + i) < 123)
		{
			*(strp + i) = *(strp + i) - 32;
		}
		i++;
	}

	return (strp);
}
