#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a linked list
 * @head: pointer to a linked list header
 *
 * Return: result of the sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *nodep = NULL;
	int res = 0;

	nodep = head;
	while (nodep != NULL)
	{
		res += nodep->n;
		nodep = nodep->next;
	}

	return (res);
}
