#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to pointer pointing at the head
 * @n: int to store in node
 *
 * Return: address of the new element
 * NULL on failing
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *ptr;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->next = NULL;
	node->n = n;

	if (*head)
	{
		ptr = *head;

		while (ptr->next)
			ptr = ptr->next;
		ptr->next = node;
	}
	else
	{
		*head = node;
	}

	return (node);
}
