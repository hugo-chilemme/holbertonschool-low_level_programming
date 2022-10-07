#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * print_line - Entry point
 * @n : number of underscore
 * Return: Always 0.
 */
void print_line(int n)
{

	int i = 0;

	for (; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
