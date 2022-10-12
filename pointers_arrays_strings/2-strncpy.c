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
	int calc_src = 0;
	int index = 0;
	int stop_at = n;

	while (src[calc_src] != '\0')
		calc_src++;


	for (; index <= calc_src; index++)
	{
		if (stop_at > 0)
		{
			dest[index] = src[index];
			stop_at--;
		}
	}

	return (dest);
}
