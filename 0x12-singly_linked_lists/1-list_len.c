#include <stddef.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the head of list
 *
 * Return: number of list elements
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;
	const list_t *ptr;

	ptr = h;
	while (ptr)
	{
		ptr = ptr->next;
		n++;
	}
	return (n);
}
