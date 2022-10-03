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
	char c = 'a';
	char b = 'A';

	for (; c <= 'z'; c++)
		putchar(c);
	for (; b <= 'Z'; b++)
		putchar(b);
	printf("\n");
	return (0);
}
