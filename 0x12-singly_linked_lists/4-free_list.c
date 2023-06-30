#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the list head node
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *np;
	list_t *temp;

	if (head != NULL)
	{
		np = head;
		while (np->next)
		{
			temp = np->next;
			free(np->str);
			free(np);
			np = temp;
		}
		free(np->str);
		free(np);
	}
}
