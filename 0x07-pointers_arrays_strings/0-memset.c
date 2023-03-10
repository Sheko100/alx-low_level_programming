#include <stdio.h>
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area
 * @b: constant byte
 * @n: number of bytes to fill
 *
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *sp;
	unsigned int i = 0;

	sp = s;

	while (i < n)
	{
		*(sp + i) = b;
		i++;
	}

	return (sp);
}
