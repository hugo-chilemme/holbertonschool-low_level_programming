#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int max_repeat = 10;
	int n = 0;

	for(; n < max_repeat; n++)
	{
		int i = 97;

		for (; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
