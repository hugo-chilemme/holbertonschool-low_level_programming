#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int asciiCode[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int i = 0;
	
	for(; i < 8; ++i)
	{
		_putchar(asciiCode[i]);
	}
	_putchar("\n")
	return (0);
}
