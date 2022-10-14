#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _strcpy - point
 * @dest : Terminal Pointer
 * @src : Data to @dest
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
