#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer pointing at list head node
 * @str: pointer to string
 *
 * Return: the address of the new element
 * NULL if malloc fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str != NULL)
	{
		new = malloc(sizeof(list_t));
		if (new != NULL)
		{

			new->str = strdup(str);
			new->len = strlen(str);
			new->next = *head;
			*head = new;
		}
	}

	return (new);
}
