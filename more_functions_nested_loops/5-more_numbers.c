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
		int c = 48;

		for (; c <= 57; c++)
		{

			_putchar(c);

			if (c == 57)
			{
				int r = 48;

				for (; r <= 52; r++)
				{
					_putchar(49);
					_putchar(r);
				}
			}
			
		}
		_putchar('\n');
	}
}
