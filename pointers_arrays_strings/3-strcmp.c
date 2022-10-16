#include "main.h"

/**
 * *_strcmp - Entry point
 * @dest: dest input
 * @src: Src input
 * @n: stop at
 *
 * Return: Always 1 (True) or 0 (False)
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s2[i] && s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
