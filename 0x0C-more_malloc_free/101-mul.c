#include "main.h"
#include <stdio.h>

/**
 * err - prints error and exits with 98
 *
 * Return: void
 */

void err(void)
{
	char errstr[] = "Error";
	int i = 0;

	while (errstr[i])
	{
		_putchar(errstr[i]);
		i++;
	}
	_putchar('\n');
	exit(98);
}

/**
 * isnum - check is the string is number
 * @s: string to check
 *
 * Return: 1 if it's number
 * 0 if not
 */

int isnum(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
		{
			printf("%c\n", s[i]);
			return (0);
		}
		i++;
	}

	return (1);
}

/**
 * printnum - prints number string
 * @str: string of numbers
 *
 * Return: void always
 */

void printnum(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * main - multiplies two positive numbers
 * @ac: arguments count
 * @av: arguments values
 *
 * Return: void always
 */

int main(int ac, char **av)
{
	long int res;

	if (ac != 3)
	{
		err();
	}
	if (isnum(av[1]) && isnum(av[2]))
	{
		res = atol(av[1]) * atol(av[2]);
		printf("%ld\n", res);
	}
	else
		err();

	return (0);
}
