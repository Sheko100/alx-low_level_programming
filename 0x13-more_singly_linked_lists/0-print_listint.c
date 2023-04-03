#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the list header
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	int n = 0;

	ptr = h;

	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		n++;
	}

	return (n);
}
