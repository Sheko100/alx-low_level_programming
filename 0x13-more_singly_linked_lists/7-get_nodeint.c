#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the list head
 * @index: node index number
 *
 * Return: node of a listint_t
 * Null if node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	listint_t *node;
	unsigned int i = 0;

	if (head)
	{
		ptr = head;
		while (i < index)
		{
			i++;
			ptr = ptr->next;
		}
		if (ptr)
		{
			node = ptr;
		}
		else
		{
			return (NULL);
		}
	}
	else
	{
		return (NULL);
	}
	return (node);
}
