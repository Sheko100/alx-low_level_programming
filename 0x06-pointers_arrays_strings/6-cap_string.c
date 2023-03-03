
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
		if (*(strp + i) == 32 || 
				*(strp + i) == 10 ||
			       	*(strp + i) == 46 || 
				*(strp + i) == 9 ||
				*(strp + i) == 44 ||
				*(strp + i) == 59 ||
				*(strp + i) == 33 ||
				*(strp + i) == 63 ||
				*(strp + i) == 34 ||
				*(strp + i) == 123 ||
				*(strp + i) == 125 ||
				*(strp + i) == 40 ||
				*(strp + i) == 41
				)
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
