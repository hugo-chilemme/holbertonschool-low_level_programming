#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - Entry point
 * @x: just x
 * @y: just y
 *
 * Return: Always 1 (True) or 0 (False)
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
