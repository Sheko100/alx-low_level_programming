#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to list head
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;
	listint_t *tmp;

	if (head)
	{
		ptr = head;
		while (ptr)
		{
			tmp = ptr->next;
			free(ptr);
			ptr = tmp;
		}

	}
}
