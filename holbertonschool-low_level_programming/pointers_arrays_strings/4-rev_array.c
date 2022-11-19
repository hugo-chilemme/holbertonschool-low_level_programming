#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * reverse_array - Entry point
 * @a: dest input
 * @n: lenght
 *
 * Return: Always 1 (True) or 0 (False)
 */
void reverse_array(int *a, int n)
{
	int index = 0;
	int e = n - 1;

	for (; index < n / 2; index++)
	{
		int cache = a[index];

		a[index] = a[e - index];
		a[e - index] = cache;
	}
}
