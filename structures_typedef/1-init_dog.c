#include "dog.h"
#include <stdio.h>
/**
 * init_dog - Entry point
 * @d: dog structure
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
