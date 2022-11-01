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
void free_dog(dog_t *d);
{
	free(d->name);
	free(d->age);
	free(d->owner);
}
