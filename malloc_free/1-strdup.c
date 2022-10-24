#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - point
 * @str :copy this string
 *
 * Return: Always 1 (True) or 0 (False)
 */
char *_strdup(char *str)
{
	char *ret;
	int len = 0;

	while (str[len])
		len++;

	ret = malloc(sizeof(char) * len);

	if (len == 0)
		return ('\0');
		
	for(; len >= 0; len--)
		ret[len] = str[len];

	return (ret);
}
