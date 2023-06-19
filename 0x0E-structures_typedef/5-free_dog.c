#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs structures
 * @d: pointer to a dog structure
 *
 * Return: void always
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
