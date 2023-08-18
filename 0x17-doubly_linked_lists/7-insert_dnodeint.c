#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node in specfic index in a linked list
 * @h: pointer to a linked list header
 * @idx: index of node
 * @n: number to add
 *
 * Return: pointer to the new node
 * NULL if malloc fails or idx is over range
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nodep = NULL, *newnode = NULL, *nextnode = NULL;
	unsigned int i = 0;

	if (idx > 0)
	{
		nodep = *h;
		while (nodep != NULL)
		{
			if (nodep->next != NULL && idx - i == 1)
			{
				newnode = malloc(sizeof(dlistint_t));
				if (newnode == NULL)
					return (NULL);
				newnode->n = n;

				newnode->prev = nodep;
				nextnode = nodep->next;
				newnode->next = nextnode;
				nextnode->prev = newnode;
				nodep->next = newnode;
				break;
			}
			else
			{
				newnode = add_dnodeint_end(h, n);
				break;
			}
			i++;
			nodep = nodep->next;
		}
	}
	else
		newnode = add_dnodeint(h, n);

	return (newnode);
}
