#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * print_array - point
 * @a : array
 * @n : sizeof array
 * Return: Always 1 (True) or 0 (False)
 */
void print_array(int *a, int n)
{
	int i = 0;
	
	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n-1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
