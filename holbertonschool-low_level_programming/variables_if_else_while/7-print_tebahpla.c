#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 122;

	for (; num >= 97; num--)
		putchar(num);
	putchar('\n');
	return (0);
}
