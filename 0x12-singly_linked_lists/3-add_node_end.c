#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to a pointer to the list head node
 * @str: pointer to string
 *
 * Return: the address of the new element
 * NULL if malloc fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *np;

	if (str != NULL)
	{
		new = malloc(sizeof(list_t));
		if (new != NULL)
		{
			new->str = strdup(str);
			new->len = strlen(str);
			new->next = NULL;
			np = *head;
			if (np != NULL)
			{
				while (np->next)
					np = np->next;

				np->next = new;
			}
			else
			{
				*head = new;
			}
		}
	}

	return (new);
}
