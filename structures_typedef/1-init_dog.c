#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializee a variable of type struct dog
 * @d: new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
