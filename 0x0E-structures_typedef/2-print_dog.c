#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer to a struct dog structure
 *
 * Return: void always
 */

void print_dog(struct dog *d)
{
	char *name, *owner;

	if (d != NULL)
	{
		name = d->name == NULL ? "(nil)" : d->name;
		owner = d->owner == NULL ? "(nil)" : d->owner;
		printf("Name: %s\nAge: %f\nOwner: %s\n", name, d->age, owner);
	}
}
