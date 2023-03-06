
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check
 * @accept: bytes to check against
 *
 * Return: number of bytes found
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int c = 0, i = 0;

	while (*(accept + c))
	{
		if (*(s + i) == *(accept + c))
		{
			i++;
			n++;
			c = 0;
		}
		else
		{
			c++;
		}
	}

	return (n);
}
