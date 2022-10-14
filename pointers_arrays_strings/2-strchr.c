#include "main.h"
/**
 * _strchr - Function
 * @s: dest
 * @c: c
 *
 * Return: Always(1)
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
		if (s[i] == c)
			return (s + i);

	}
	return (NULL);
}
