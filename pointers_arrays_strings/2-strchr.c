#include "main.h"
#include <stddef.h>

/**
 * _strchr - print depending of a character search
 * @s: pointer who will be scan
 * @c: this is the character who will search
 *
 * Return: s or null
 */
char *_strchr(char *s, char c)
{
	while (*s && *s != c)
		s++;

	return (*s == c ? s : '\0');
}
