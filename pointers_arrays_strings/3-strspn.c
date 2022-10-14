#include "main.h"
/**
 * _strcmp - compare number of character
 * @s1: dest
 * @s2: src
 *
 * Return: s1 - s2
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	while (accept[i] != '\0' && s[i] != '\0' && s[i] == accept[i])
		i++;
	return (s[i] - accept[i]);
}
