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

	if (!new_dog)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->name = malloc(sizeof(char) + strlen(name) + 1);
	new_dog->owner = malloc(sizeof(char) + strlen(owner) + 1);
	new_dog->age = age;

	if (!new_dog->name || !new_dog->owner)
	{
		free(new_dog->name);
		free(new_dog->owner);
	}


	strcpy(new_dog->name, name);
	strcpy(new_dog->owner, owner);

	return (new_dog);
}
