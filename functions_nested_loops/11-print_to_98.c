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
	int i = n;

	for (; i <= 98; i++)
	{
		printf("%i", i);

		if (i < 98)
		{
			printf(", ");
		}
	}
}
