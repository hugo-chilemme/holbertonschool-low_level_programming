#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * *_strncpy - Entry point
 * @dest: dest input
 * @src: Src input
 * @n: stop at
 *
 * Return: Always 1 (True) or 0 (False)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
