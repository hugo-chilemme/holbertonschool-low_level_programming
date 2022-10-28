#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - point
 * @s1: first char
 * @s2: second char
 * @n: stop of s2
 * Return: Always 1 (True) or 0 (False)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    
        int len_s1 = 0;
        unsigned int len_displayed_s2 = 0;
        char *mal;
        int totalSize = 0;
        int index = 0;
	
	if (s1 == NULL || s2 == NULL)
		return (NULL);

        while (s1[len_s1] != '\0')
                len_s1++;

        while (s2[len_displayed_s2] != '\0' && len_displayed_s2 < n - 1)
                len_displayed_s2++;

        totalSize = len_s1 + len_displayed_s2;

        mal = malloc(totalSize);
      
       	if (mal == 0)
	{
		free(mal);
		return (NULL);
	}
        for (; index <= totalSize; index++)
        {
                if (index < len_s1)
                        mal[index] = s1[index];
                else
                        mal[index] = s2[index - len_s1];
        }

        return (mal);
}
