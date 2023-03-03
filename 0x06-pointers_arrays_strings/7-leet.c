
/**
 * leet - encodes a string into 1337
 * @str: string to encode
 *
 * Return: encoded string
 */

char *leet(char *str)
{
	char *strp;
	int i = 0;
	char c;

	strp = str;

	while (*(strp + i))
	{
		c = *(strp + i);

		if (c == 65 || c == 97)
		{
			*(strp + i) = 52;
		}
		else if (c == 84 || c == 116)
		{
			*(strp + i) = 55;
		}
		else if (c == 69 || c == 101)
		{
			*(strp + i) = 51;
		}
		else if (c == 79 || c == 111)
		{
			*(strp + i) = 48;
		}
		else if (c == 76 || c == 108)
		{
			*(strp + i) = 49;
		}
		i++;
	}
	return (strp);
}
