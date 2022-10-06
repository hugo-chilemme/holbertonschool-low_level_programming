#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _isdigit - Entry point
 * @c : Input
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	
	return (0);
}
