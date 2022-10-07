#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - Entry point
 * @n : number
 * Return: Always 0.
 */
void print_diagonal(int n)
{

	int i = 0;
	int p = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (; i < n; i++)
	{
		int c = 0;

		for (; c < p; c++)
		{
			_putchar(' ');
		}
		p++;
		_putchar('\\');
		_putchar('\n');
	}
}
