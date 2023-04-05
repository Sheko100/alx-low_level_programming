#include <stddef.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data n
 * @head: pointer to a pointer pointing at list head
 *
 * Return: node data (n)
 * 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	int n = 0;

	if (*head)
	{
		n = (*head)->n;
		*head = (*head)->next;
	}

	return (n);
}
