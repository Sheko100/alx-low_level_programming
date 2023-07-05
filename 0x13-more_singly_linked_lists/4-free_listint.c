#include "lists.h"

/**
 * free_listint - frees a list_t list
 * @head: pointer to the list head node
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *np;
	listint_t *temp;

	if (head != NULL)
	{
		np = head;
		while (np->next)
		{
			temp = np->next;
			free(np);
			np = temp;
		}
		free(np);
	}
}
