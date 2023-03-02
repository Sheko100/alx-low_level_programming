
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: more than, equal to, or less than 0 if the
 * both strings lengthes match
 */

int _strcmp(char *s1, char *s2)
{
	char *sp1;
	char *sp2;
	int i = 0, res;

	sp1 = s1;
	sp2 = s2;

	while (*(sp1 + i) && *(sp2 + i))
	{
		if (*(sp1 + i) == *(sp2 + i))
		{
			res = 0;
			i++;
		}
		else
		{
			res = *(sp1 + i) - *(sp2 + i);
			break;
		}

	}

	return (res);

}
