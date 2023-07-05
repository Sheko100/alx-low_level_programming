#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to pointer pointing at the list head
 *
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *np;

	if (head != NULL)
	{
		np = *head;
		if (np != NULL)
		{
			*head = np->next;
			n = np->n;
			free(np);
		}
	}

	return (n);
}
