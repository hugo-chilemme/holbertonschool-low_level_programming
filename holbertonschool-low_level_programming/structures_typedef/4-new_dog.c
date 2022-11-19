#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - Entry point
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == 0)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->name = malloc(strlen(name) + 1);
	new_dog->owner = malloc(strlen(owner) + 1);
	new_dog->age = age;

	if (new_dog->name == 0 || new_dog->owner == 0)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}


	strcpy(new_dog->name, name);
	strcpy(new_dog->owner, owner);

	return (new_dog);
}
