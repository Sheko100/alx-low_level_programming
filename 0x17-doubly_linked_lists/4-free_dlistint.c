#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a linked list nodes
 * @head: pointer to a linked list header
 *
 * Return: void always
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *nodep = NULL, *next = NULL;

	nodep = head;
	while (nodep != NULL)
	{
		next = nodep->next;
		free(nodep);
		nodep = next;
	}
}
