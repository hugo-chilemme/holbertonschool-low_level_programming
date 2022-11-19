#include "main.h"
/**
 * _strstr - scan the 1 first occurence of any character who is part of 2 and
 * return the character from 1.
 * @g: string
 * @f: search char
 *
 * Return: s or null
 */
char *_strstr(char *g, char *f)
{
	unsigned int i, j;

	for (i = 0; g[i]; i++)
	{
		for (j = 0; f[j]; j++)
			if (g[i + j] != f[j])
				break;
		if (f[j] == '\0')
			return (g + i);
	}
	return ('\0');
}
