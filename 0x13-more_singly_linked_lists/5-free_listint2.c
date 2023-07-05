#include "lists.h"

/**
 * free_listint2 - frees a list_t list
 * @head: pointer to a pointer pointing at the list head node
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *np;
	listint_t *temp;

	if (head != NULL)
	{
		np = *head;
		*head = NULL;
		if (np != NULL)
		{
			while (np->next)
			{
				temp = np->next;
				free(np);
				np = temp;
			}
		}
		free(np);
	}
}
