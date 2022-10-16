#include "main.h"
/**
 * print_chessboard - scan the 1 first occurence of any character who is part of 2 and
 * return the character from 1.
 * @array: array
 *
 * Return: s or null
 */
void print_chessboard(char (*array)[8])
{
	int l = 0;
	int r = 0;

	for (l < 8; l++)
	{
		r = 0;

		for (; r < 8; r++)
			printf("%c", array[l][r]);
		printf("\n");
	}

}
