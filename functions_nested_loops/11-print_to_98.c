#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry point
 * @n : Start number
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int c = n;
	int t = 98;

	while (c != t)
	{
		printf("%i", c);
		if (c > 98)
		{
			c--;
		}
		else if (c < 98)
		{
			c++;
		}

		if (c != 98)
		{
			printf(", ");
		}		
	}
	if (n != t)
	{
		printf(", ");
	}
	printf("98\n");
}
