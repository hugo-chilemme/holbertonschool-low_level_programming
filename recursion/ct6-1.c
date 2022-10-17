#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - Entry point
 * @c: number
 *
 * Return: Always 1 (True) or 0 (False)
 */
int is_prime_number(int c)
{
	int isReadyFind;
	int i = c - 1;
	
	if (c < 2)
		return (0);
	
	for (; i > 1; i--) 
	{
		if ( c % i == 0)
		{
			if (isReadyFind)
				return (0);
			isReadyFind = 1;
		}
	}
	return (1);
}
