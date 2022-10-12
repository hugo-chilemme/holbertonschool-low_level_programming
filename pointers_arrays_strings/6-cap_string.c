#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * cap_string - Entry point
 * @n: dest input
 *
 * Return: Always 1 (True) or 0 (False)
 */
char *cap_string(char *n)
{
	int i = 0;
	int capitalize = 1;

	while (n[i] != '\0')
	{
		if (capitalize == 1)
		{
			if (n[i] >= 97 && n[i] <= 122)
			{
				capitalize = 0; 
				n[i] = n[i] - 32;
			}
			capitalize = 0;
		}

		if (n[i] == ' ' || n[i] == ',' || n[i] == '	' || n[i] == ';' || n[i] == '.' || n[i] == '!' || n[i] == '?' || n[i] == '"' || n[i] == '(' || n[i] == ')' || n[i] == '{' || n[i] == '}')
			capitalize = 1;
		i++;
	}
	return (n);


}
