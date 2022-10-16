#include "main.h"
/**
 * print_chessboard - Main
 * @array: array
 *
 * Return: s or null
 */
void print_chessboard(char (*array)[8])
{
	int l = 0;
	int r = 0;

	for (; l < 8; l++)
	{
		r = 0;

		for (; r < 8; r++)
			printf("%c", array[l][r]);
		printf("\n");
	}

}
