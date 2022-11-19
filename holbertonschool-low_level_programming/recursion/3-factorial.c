#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - Entry point
 * @n: input
 *
 * Return: Always 1 (True) or 0 (False)
 */
int _pow_recursion(int x, int y)
{
	if (y <= 0)
		return (-1);

	y--;
	return (x * _pow_recursion(x, y));
}
