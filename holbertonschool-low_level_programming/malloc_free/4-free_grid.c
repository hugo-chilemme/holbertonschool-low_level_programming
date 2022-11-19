#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - point
 * @grid: width
 * @height: height
 *
 * Return: Always 1 (True) or 0 (False)
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL)
	{
		int fr = 0;

		for (; fr <= height; fr++)
			free(grid[fr]);
		free(grid);
	}
}
