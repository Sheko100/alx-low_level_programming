#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the list head node
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *np;

	np = h;

	while (np)
	{
		if (np->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", np->len, np->str);

		count++;
		np = np->next;
	}

	return (count);
}
