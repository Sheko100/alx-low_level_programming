
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
	int l;
	char c[] = {'a', 'e', 'o', 't', 'l'};
	char n[] = {'4', '3', '0', '7', '1'};

	strp = str;

	while (*(strp + i))
	{
		l = 0;
		while (l < 5)
		{
			if (*(strp + i) == c[l] || *(strp + i) == (c[l] - 32))
			{
				*(strp + i) = n[l];
			}
			l++;
		}
		i++;
	}
	return (strp);
}
