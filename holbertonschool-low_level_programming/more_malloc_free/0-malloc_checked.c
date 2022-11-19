#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - point
 * @b : size of malloc
 * Return: Always 1 (True) or 0 (False)
 */
void *malloc_checked(unsigned int b)
{
	if (b > 0)
	{
		void *loc = malloc(b);

		if (loc == 0)
			exit(98);
		return (loc);
	}
	exit(98);
}
