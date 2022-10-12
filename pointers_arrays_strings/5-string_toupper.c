#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * reverse_array - Entry point
 * @n: dest input
 *
 * Return: Always 1 (True) or 0 (False)
 */
char *string_toupper(char *n)
{
	int index = 0;

	while (n[index] != '\0')
	{
		if (n[index] >= 97 && n[index] <= 122)
			n[index] = n[index] - 32; 
		index++;
	}
	return (n);


}
