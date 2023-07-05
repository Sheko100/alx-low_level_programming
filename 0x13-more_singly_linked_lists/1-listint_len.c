#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the list header
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *np;

	np = h;

	if (np != NULL)
	{
		while (np)
		{
			count++;
			np = np->next;
		}
	}

	return (count);
}
