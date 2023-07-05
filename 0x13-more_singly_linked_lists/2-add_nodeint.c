#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a listint_t list
 * @head: pointer to a pointer pointing at list head node
 * @n: pointer to integer
 *
 * Return: the address of the new element
 * NULL if malloc fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	if (head != NULL)
	{
		new = malloc(sizeof(listint_t));
		if (new != NULL)
		{

			new->n = n;
			new->next = *head;
			*head = new;
		}
	}

	return (new);
}
