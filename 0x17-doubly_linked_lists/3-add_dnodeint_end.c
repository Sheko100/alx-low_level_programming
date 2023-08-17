#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a node in the end of a linked list
 * @head: pointer to a pinter pointing at the header of a linked list
 * @n: number to add
 *
 * Return: pointer to the address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nodep, *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	nodep = *head;
	if (nodep == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (nodep->next != NULL)
			nodep = nodep->next;
		newnode->prev = nodep;
		nodep->next = newnode;
	}

	return (newnode);
}
