#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t lis
 * @h: pointer to the head of list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;
	const list_t *ptr;

	ptr = h;
	while (ptr)
	{
		if (ptr->str)
			printf("[%d] %s\n", ptr->len, ptr->str);
		else
			printf("[0] (nil)\n");
		ptr = ptr->next;
		n++;
	}
	return (n);
}
