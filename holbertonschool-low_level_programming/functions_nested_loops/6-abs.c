#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _abs - Entry point
 * @c: input int
 *
 * Return: Always 1 (True) or 0 (False)
 */
int _abs(int c)
{
	if (c < 0)
	{
		return (c * -1);
	}
	return (c);
}
