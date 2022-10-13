#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen - Entry point
 * @s : char of string
 * Return: Always 1 (True) or 0 (False)
 */
int _strlen(char *s)
{
	int i = 0;
	int lenght = 0;

	for (; s[i] != 0; i++)
	{
		lenght++;
	}
	return (lenght);
}
