#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the memory area of the struct dog
 * @d: pointer to the struct dog
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d);
}
