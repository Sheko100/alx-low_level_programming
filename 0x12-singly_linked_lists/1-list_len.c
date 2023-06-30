#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the list head node
 *
 * Return: list elements count
 */

size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *np;

	np = h;
	while (np)
	{
		np = np->next;
		count++;
	}

	return (count);
}
