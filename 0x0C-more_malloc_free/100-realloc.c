#include "main.h"
#include "string.h"

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: previously allocated memory bytes size
 * @new_size: bytes size for the new allocated memory
 *
 * Return: pointer to new allocated memory
 * NULL if new_size is 0 and ptr is not NULL
 * ptr if new_size equals old_size
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;
	unsigned int bytes, n;

	if (ptr == NULL)
		bytes = new_size;
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	newptr = malloc(bytes);
	if (newptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	n = old_size < new_size ? old_size : new_size;
	memcpy(newptr, ptr, n);
	free(ptr);

	return (newptr);
}
