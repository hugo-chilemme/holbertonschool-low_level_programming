#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _puts - Entry point
 * @s : char of string
 * Return: Always 1 (True) or 0 (False)
 */
void _puts(char *s)
{
	int i = 0;

	for (; s[i] != 0; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
