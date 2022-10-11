#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * puts2 - Entry point
 * @s : char of string
 * Return: Always 1 (True) or 0 (False)
 */
void puts2(char *str)
{
	int len = 0;
	int i = 0;

	for (; str[len]; len++);
	for (; i < len; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');	
}
