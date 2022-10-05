#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _islower - Entry point
 * @c: input char
 *
 * Return: Always 1 (True) or 0 (False)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
