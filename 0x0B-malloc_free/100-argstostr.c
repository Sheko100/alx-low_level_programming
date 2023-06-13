#include "main.h"
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: arguments count
 * @av: arguments values
 *
 * Return: pointer to the whole strng on success
 * NULL if ac is 0 or av is NULL or malloc fails
 */

char *argstostr(int ac, char **av)
{
	char *str = NULL;
	int size = 0, i = 0, l = 0, c;

	if (av == NULL || ac == 0)
		return (NULL);

	while (av[i])
	{
		c = 0;
		while (av[i][c])
		{
			size++;
			c++;
		}
		i++;
	}

	str = malloc(size + ac + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (av[i])
	{
		c = 0;
		while (av[i][c])
		{
			str[l] = av[i][c];
			c++;
			l++;
		}
		str[l] = '\n';
		l++;
		i++;
	}
	str[l] = '\0';
	return (str);
}
