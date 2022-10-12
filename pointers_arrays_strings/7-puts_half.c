#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * puts_half - point
 * @str : char of string
 * Return: Always 1 (True) or 0 (False)
 */
void puts_half(char *str)
{
	int len = 0;
	int s = 0;
	int i = 0;

	for (; str[i] != 0; i++)
		len++;

	s = len / 2;
	
	for (; s < len; s++)
		_putchar(str[s]);
	_putchar('\n');
}
