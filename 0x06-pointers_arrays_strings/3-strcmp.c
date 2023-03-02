
/**
 * _strcpy - compares two strings
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
	int s1_len = 0, s2_len = 0;

	sp1 = s1;
	sp2 = s2;

	while (*(sp1 + s1_len) != '\0')
	{
		s1_len++;
	}

	while (*(sp2 + s2_len) != '\0')
	{
		s2_len++;
	}

	if (s2_len > s1_len)
	{
		return (-8);
	}
	else if (s2_len < s1_len)
	{
		return (8);
	}
	else
	{
		return (0);
	}
}
