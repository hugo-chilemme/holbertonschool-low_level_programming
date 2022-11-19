#include <stdio.h>
#include "main.h"

/**
 * check_prime_number - Entry point
 * @isReadyFind: check if prime is ready find
 * @n: start value
 * @t: check value
 *
 * Return: Always 1 (True) or 0 (False)
 */
int check_prime_number(int isReadyFind, int n, int t)
{
	t++;

	if (n == t && !isReadyFind)
		return (1);

	if (n % t == 0)
	{
		if (isReadyFind)
			return (0);

		isReadyFind = 1;
	}
	return (check_prime_number(isReadyFind, n, t));
}

/**
 * is_prime_number - Entry point
 * @c: number
 *
 * Return: Always 1 (True) or 0 (False)
 */
int is_prime_number(int c)
{
	if (c <= 1)
		return (0);
	return (check_prime_number(0, c, 1));
}
