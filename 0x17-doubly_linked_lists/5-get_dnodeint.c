#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to a linked list header
 * @index: the node index
 *
 * Return: pointer to a node
 * NULL if node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nodep = NULL;

	nodep = head;
	while (nodep != NULL)
	{
		if (index == 0)
			break;
		nodep = nodep->next;
		index--;
	}

	return (nodep);
}
