#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * leet - Entry point
 * @n: dest input
 *
 * Return: Always 1 (True) or 0 (False)
 */
char *leet(char *n)
{
	char find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char replace[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i = 0;
	int l = 0;

	for (; n[i] != '\0'; i++)
	{
		l = 0;
		for (; l < 10; l++)
		{
			if (find[l] == n[i])
			{
				n[i] = replace[l];
			}
		}
	}
	return (n);

}
