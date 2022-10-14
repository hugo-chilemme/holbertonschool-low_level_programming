#include "main.h"
/**
 * _strcmp - compare number of character
 * @s1: pointer
 * @s2: pointer 2
 *
 * Return: s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s2[i] && s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
