#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * init_dog - Entry point
 * @d: dog structure
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;
	char *cp_name = malloc(sizeof(char) * strlen(name));
	char *cp_owner = malloc(sizeof(char) * strlen(owner));
	strcpy(cp_name, name);
	strcpy(cp_owner, owner);
	
	(*new_dog).name = cp_name;
	(*new_dog).age = age;
	(*new_dog).owner = cp_owner;
}
