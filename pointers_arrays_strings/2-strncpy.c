#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * *_strncpy - Entry point
 * @dest: dest input
 * @src: Src input
 * @n: stop at
 *
 * Return: Always 1 (True) or 0 (False)
 */
char *_strncpy(char *dest, char *src, int n)
{
        int l = 0;

        while (l < n)
        {
                if (src[l] != '\0')
                        dest[l] = src[l];
                else
                        dest[l] = '\0';
                l++;
        }
        return (dest);
}
