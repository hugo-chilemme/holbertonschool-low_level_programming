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
	{
		printf("(nil)");
		return;
	}
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: ");
	if(d->age)
		printf("%f\n", d->age);
	else 
		printf("(nil)\n");

	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");

}
