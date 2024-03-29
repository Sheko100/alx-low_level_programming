#include "main.h"
#include <stdio.h>

/**
 * wordcount - counts the words sperated by space
 * @s: string to count its words
 *
 * Return: words count
 */

int wordcount(char *s)
{
	int i = 0;
	int count = 0;

	while (s[i])
	{
		if (s[i] != ' ')
		{
			count++;
			while (s[i] != ' ' && s[i] != '\0')
				i++;
			continue;
		}
		i++;
	}
	return (count);
}

/**
 * wordlen - gets the word length seperated by space
 * @w: pointer to first char of word
 *
 * Return: word length
 */

int wordlen(char *w)
{
	int len = 0;

	while (w[len] != ' ' && w[len] != '\0')
		len++;

	return (len);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: array of the words on success
 * NULL if str is NULL or empty or malloc fails
 */

char **strtow(char *str)
{
	char **words;
	int i, count, w = 0, len = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	count = wordcount(str);
	if (count == 0)
		return (NULL);
	words = malloc((count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	while (*str)
	{
		if (*str != ' ')
		{
			i = 0;
			len = wordlen(str);
			words[w] =  malloc(len + 1);
			if (words[w] == NULL)
				return (NULL);
			while (*str != ' ' && *str != '\0')
			{
				words[w][i] = *str;
				str++;
				i++;
			}
			words[w][i] = '\0';
			w++;
			continue;
		}
		str++;
	}
	words[w] = NULL;
	return (words);
}

