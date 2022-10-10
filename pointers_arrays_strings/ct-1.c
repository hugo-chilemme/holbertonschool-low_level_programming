#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Entry point
 * @c: input char
 *
 * Return: Always 1 (True) or 0 (False)
 */
void reset_to_98(int *p)
{
	int t = *p;
	int * pa = &t;

	printf("a = %d (addr %p)\n", t, &t);
	printf("=> %p\n", pa);

	*p = 98;
	printf("Val stocké %p est %d\n", pa, *pa);
}
