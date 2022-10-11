#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * print_rev - Entry point
 * @s : char of string
 * Return: Always 1 (True) or 0 (False)
 */
void print_rev(char *s)
{
	int i = 0;
	int len = 0;

	for (; s[i] != 0; i++)
	{
		len++;
	}

	for (int t = i; t >= 0; t--)
	{
		_putchar(s[t]);
	}
	
	printf("\n");
}
