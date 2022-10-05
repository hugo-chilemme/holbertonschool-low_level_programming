#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int h = 0;

	for (; h < 24; h++)
	{
		int m = 0;

		for (; m < 60; m++)
		{
			if (m < 10)
			{
				printf("%i:0%i\n", h, m);
			}
			else
			{
				printf("%i:%i\n", h, m);
			}
			
		}
	}
}

