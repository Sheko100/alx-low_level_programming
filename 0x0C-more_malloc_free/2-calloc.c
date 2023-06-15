#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: count of array elements
 * @size: element bytes size
 *
 * Return: pointer to the allocated memory on success
 * NULL if nmemb or size is 0 or malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	return (arr);
}
