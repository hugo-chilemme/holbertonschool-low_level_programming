#include <stdio.h>
#include "main.h"

/**
 * factorial - Entry point
 * @s: input
 *
 * Return: Always 1 (True) or 0 (False)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if(n == 1)
		return (1);
	return (n * factorial(n-1));
}
