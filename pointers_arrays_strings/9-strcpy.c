#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _strcpy - point
 * @a : array
 * @n : sizeof array
 * Return: Always 1 (True) or 0 (False)
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i = 0;

	while (src[len] != '\0')
		len++;


	for (; i <= len; i++)
		dest[i] = src[i];

	return (dest);
}
