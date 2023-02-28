
/**
 * _strlen - returns the length of a string
 * @s: string to return its length
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int len = 0;
	int i = 0;
	char *sp;

	sp = s;

	while (*(sp + i) != '\0')
	{
		len++;
		i++;
	}

	return (len);
}
