#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _memset - point
 * @s : buffer
 * @b : data to buffer
 * @n : number to change @b
 * Return: Always 1 (True) or 0 (False)
 */
char *_memset(char *s, char b, unsigned int n)
{
	int index = 0;

	for (; (unsigned int) index < n; index++)
	{
		s[index] = b;
	}
	return (s);
}
