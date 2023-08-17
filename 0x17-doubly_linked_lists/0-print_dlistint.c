#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints the contents of dlistint_t linked list
 * @h: pointer to the linked list header
 *
 * Return: count of the linked list nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int len = 0;
	const dlistint_t *nodep = NULL;

	nodep = h;
	while (nodep)
	{
		printf("%d\n", nodep->n);
		len++;
		nodep = nodep->next;
	}

	return (len);
}
