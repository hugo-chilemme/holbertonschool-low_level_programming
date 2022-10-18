#include <stdio.h>
#include "main.h"

/**
 * check_recursion - Entry point
 * @n: target
 * @t: test
 *
 * Return: Always 1 (True) or 0 (False)
 */
int check_recursion(int n, int t)
{
	t++;

	if (n == t)
	{
		if (n % 2 == 0 || t == 1)
			return (1);
		return (-1);
	}
	if (t * t == n)
		return (t);
	return (check_recursion(n, t));
}

/**
 * _sqrt_recursion - Entry point
 * @c: number
 *
 * Return: Always 1 (True) or 0 (False)
 */
int _sqrt_recursion(int c)
{
	if (c < 1)
		return (-1);
	return (check_recursion(c, 0));
}
