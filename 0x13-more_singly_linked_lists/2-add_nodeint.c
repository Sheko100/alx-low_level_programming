#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to pointer pointing at the head
 * @n: int to store in node
 *
 * Return: address of the new element
 * NULL on failing
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}
	if (head)
	{
		node->next = *head;
	}
	else
	{
		node->next = NULL;
	}
	node->n = n;
	*head = node;
	return (node);
}
