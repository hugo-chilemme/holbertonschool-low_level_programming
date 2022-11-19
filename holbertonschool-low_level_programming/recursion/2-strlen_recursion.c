#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - Entry point
 * @s: input
 *
 * Return: Always 1 (True) or 0 (False)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
