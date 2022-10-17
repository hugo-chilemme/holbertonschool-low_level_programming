#include "main.h"

/**
 * *_strcmp - Entry point
 * @dest: dest input
 * @src: Src input
 *
 * Return: Always 1 (True) or 0 (False)
 */
int _strcmp(char *dest, char *src)
{
	int i = 0;

	while (src[i] && dest[i] && dest[i] == src[i])
		i++;
	return (dest[i] - src[i]);
}
