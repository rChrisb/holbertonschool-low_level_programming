#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - f new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: name, age, owner
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *n, *o;
	int len_n, len_o;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (name == NULL)
		return (NULL);
	len_n = strlen(name) + 1;
	n = malloc(len_n);
	if (n == NULL)
	{
		free(new);
		return (NULL);
	}
	memcpy(n, name, len_n);
	new->name = n;
	if (owner == NULL)
		return (NULL);
	len_o = strlen(owner) + 1;
	o = malloc(len_o);
	if (o == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	memcpy(o, owner, len_o);
	new->owner = o;
	new->age = age;
	return (new);
}
