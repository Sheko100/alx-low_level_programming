#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog -  initialize a variable of type struct dog
 * @d: pointer to dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner name of the dog
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		printf("Ok\n");
		exit(1);
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
