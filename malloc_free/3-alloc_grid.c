#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - point
 * @width: width
 * @height: height
 *
 * Return: Always 1 (True) or 0 (False)
 */
int **alloc_grid(int width, int height)
{
	int h = 0;
	int **table;

	if (height <= 0 || width <= 0)
		return (NULL);

	table = malloc(sizeof(int *) * (height));

	for (; h < height; h++)
		table[h] = malloc(sizeof(int) * width);

	return (table);
}
