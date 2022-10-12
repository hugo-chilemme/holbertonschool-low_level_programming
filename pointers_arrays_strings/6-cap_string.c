#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"



int isCapitalizeLetter(char n)
{
        char detectCapitalize[] = {'\n', ' ', ',', 9, ';', '.', '!', '?', '"', '(', ')', '{', '}'};

        for (int i = 0; i < sizeof(detectCapitalize) / sizeof(detectCapitalize[0]) ; i++) {
                if (detectCapitalize[i] == n)
                        return (1);
        }
        return (0);

}
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
		if ( isCapitalizeLetter(n[i]) )
			capitalize = 1;
		i++;
	}
	return (n);


}

