#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: name, age, owner
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *n;
	char *o;

	new = malloc(sizeof(dog_t));

	if (new == NULL)
	{
		return (NULL);
	}

	n = strdup(name);
	if (n == NULL)
	{
		free(n);
		free(new);
		return (NULL);
	}

	o = strdup(owner);
	if (o == NULL)
	{
		free(n);
		free(new);
		return (NULL);
	}

	new->name = n;
	new->owner = o;
	new->age = age;
	return (new);
}
