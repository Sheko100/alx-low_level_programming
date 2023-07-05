#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the list header
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *np;

	np = h;

	if (np != NULL)
	{
		while (np)
		{
			printf("%d\n", np->n);
			count++;
			np = np->next;
		}
	}

	return (count);
}
