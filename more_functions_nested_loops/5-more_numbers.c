#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Entry point
 * Return: Always 0.
 */
void more_numbers(void)
{

	int i = 0;

	for (; i < 10; i++)
	{
		int c = 0;

		for (; c <= 14; c++)
		{
			int result = c;

			if (c >= 10)
			{
				_putchar(49);
				result -= 10;
			}
			_putchar(48 + result);
		}
		_putchar('\n');
	}
}
