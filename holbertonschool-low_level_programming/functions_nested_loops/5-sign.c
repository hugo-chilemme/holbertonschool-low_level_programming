#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * print_sign - Entry point
 * @c: input char
 *
 * Return: Always 1 (True) or 0 (False)
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (c < 0)
	{
		_putchar(45);
		return (-1);
	}
	_putchar(48);
	return (0);
}
