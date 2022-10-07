#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * print_square - Entry point
 * @size : size of square
 * Return: Always 0.
 */
void print_square(int size)
{

	int i = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (; i < size; i++)
	{
		int s = 0;

		for (; s < size; s++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

