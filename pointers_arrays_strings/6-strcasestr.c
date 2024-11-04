#include "main.h"

/**
 * _strcasestr - locates a substring, ignoring case
 * @haystack: string to search
 * @needle: substring to search for
 *
 * Return: pointer to the beginning of the located substring, or NULL if the
 * substring is not found
 */
char *_strcasestr(char *haystack, char *needle)
{
	int i = 0, j;

	if (!*needle)
		return haystack;

	for (; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0] || haystack[i] == needle[0] + 32)
		{
			j = 0;
			while (needle[j] != '\0' &&
				   (haystack[i + j] == needle[j] || haystack[i + j] == needle[j] + 32))
			{
				j++;
			}
			if (needle[j] == '\0')
				return &haystack[i];
		}
	}
	return('\0');
}
