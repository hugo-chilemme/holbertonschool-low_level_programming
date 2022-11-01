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
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");

}
