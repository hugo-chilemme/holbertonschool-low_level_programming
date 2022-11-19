#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * swap_int - Entry point
 * @a : first number
 * @b : second number
 * Return: Always 1 (True) or 0 (False)
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
