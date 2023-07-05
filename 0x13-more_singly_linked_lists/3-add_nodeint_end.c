#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list_t list
 * @head: pointer to a pointer to the list head node
 * @n: pointer to integer
 *
 * Return: the address of the new element
 * NULL if malloc fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *np;

	if (head != NULL)
	{
		new = malloc(sizeof(listint_t));
		if (new != NULL)
		{
			new->n = n;
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
