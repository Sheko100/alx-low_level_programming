
/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
	char *sp;
	char revs[10];
	char *revsp;
	int i = 0, l = 0;

	revsp = revs;
	sp = s;

	while (*(sp + i) != '\0')
	{
		*(revsp + i) = *(sp + i);
		i++;
	}
	i--;
	while (i >= 0)
	{
		*(sp + l) = *(revsp + i);
		l++;
		i--;
	}
}
