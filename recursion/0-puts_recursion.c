#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Entry point
 * @s: input
 *
 * Return: Always 1 (True) or 0 (False)
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if(*s++) 
		_puts_recursion(s);
	else
		_putchar('\n');
}
