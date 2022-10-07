#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * print_triangle - Entry point
 * @n : number
 * Return: Always 0.
 */
void print_triangle(int n)
{

	int i = 1;
	int seek = 0;

	for (; i <= n; i++)
	{
		int r = 1;

		for (; r <= n; r++)
		{
			if (r >= n - seek)
			{
				printf("#");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
		seek++;
	}
}
