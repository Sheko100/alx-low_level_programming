#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node to a linked list
 * @head: pointer to a pointer pointing at the header of the linked list
 * @n: number to add
 *
 * Return: pointer to the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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
		*head = newnode;
	else
	{
		newnode->next = *head;
		(*head)->prev = newnode;
		*head = newnode;
	}

	return (*head);
}
