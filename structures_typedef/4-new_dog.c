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

	n = malloc(sizeof(char) * strlen(name));
	if (n == NULL)
	{
		free(n);
		free(new);
		return (NULL);
	}

	o = malloc(sizeof(char) * strlen(owner));
	if (o == NULL)
	{
		free(n);
		free(new);
		return (NULL);
	}

	new->name = memcpy(n, name, strlen(name) + 1);
	new->owner = memcpy(o, owner, strlen(owner) + 1);
	new->age = age;
	return (new);
}
