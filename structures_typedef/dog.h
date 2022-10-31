#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure type for a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: structure containing three parameters for any dog,
 * its name, age and owner
 *
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

#endif
