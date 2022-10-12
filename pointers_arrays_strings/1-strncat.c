#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * *_strncat - Entry point
 * @dest: dest input
 * @src : Src input
 * @n : stop at 
 *
 * Return: Always 1 (True) or 0 (False)
 */
char *_strncat(char *dest, char *src, int n)
{
	int calc_dest = 0;
	int calc_src = 0;
	int output_size = 0;
	int index = 0;
	int stop_at = n;

	while (dest[calc_dest] != '\0')
		calc_dest++;

	while (src[calc_src] != '\0')
		calc_src++;

	output_size = calc_dest + calc_src;


	for (; index < output_size; index++)
	{
		if (index >= calc_dest && stop_at > 0)
		{
			dest[index] = src[index - calc_dest];
			stop_at--;
		}
	}

	return (dest);
}
