#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: pomiter to a pointer pointing at a linked list header
 * @index: the index of a node
 *
 * Return: 1 on success
 * -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *nodep = NULL, *nextnode = NULL, *prevnode = NULL;
	int status = -1;

	nodep = *head;
	while (nodep != NULL)
	{
		if (index == 0)
		{
			nextnode = nodep->next;
			prevnode = nodep->prev;
			free(nodep);
			if (nextnode != NULL)
				nextnode->prev = prevnode;
			if (prevnode != NULL)
			{
				prevnode->next = nextnode;
			}
			else
				*head = nextnode;
			status = 1;
			break;
		}
		index--;
		nodep = nodep->next;
	}

	return (status);
}
