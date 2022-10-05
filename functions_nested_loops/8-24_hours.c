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
			if (h < 10)
                	{
                        	printf("0");
                	}
			printf("%i:", h);

			if (m < 10)
			{
				printf("0");
			}
			printf("%i\n",m);			
		}
	}
}

