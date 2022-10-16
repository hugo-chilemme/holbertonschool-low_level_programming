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

	while (s2[i] && s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
