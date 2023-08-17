#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - Counts the elements of dlistint_t linked list
 * @h: pointer to the linked list header
 *
 * Return: count of the linked list nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;
	const dlistint_t *nodep = NULL;

	nodep = h;
	while (nodep)
	{
		len++;
		nodep = nodep->next;
	}

	return (len);
}
