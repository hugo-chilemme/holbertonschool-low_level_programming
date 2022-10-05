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
	int fc = 1;

	while (c != t || fc == 1)
	{
		fc = 0;
		if (c > 98)
		{
			c--;
		}
		else if (c < 98)
		{
			c++;
		}

		printf("%i", c);
		if (c != 98)
		{
			printf(", ");
		}		
	}
	printf("\n");
}
