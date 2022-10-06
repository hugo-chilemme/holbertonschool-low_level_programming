#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * print_numbers - Entry point
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int c = 48;

	for (; c <= 57; c++)
	{
		if (c != 50 && c != 52)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
