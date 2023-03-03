
/**
 * cap_string - capitalizes all words of a string
 * @str: string to capitalize
 *
 * Return: pointer to the string
 */

char *cap_string(char *str)
{
	char *strp;
	int i = 0;
	char fchar;

	strp = str;

	while (*(strp + i))
	{
		if (*(strp + i) == 32 || *(strp + i) == 10 || *(strp + i) == 46 || *(strp + i) == 9)
		{
			fchar = *(strp + (i + 1));

			if (fchar < 123 && fchar > 96)
			{
				*(strp + (i + 1)) = fchar - 32;
			}
		}
		i++;
	}

	return (strp);
}
