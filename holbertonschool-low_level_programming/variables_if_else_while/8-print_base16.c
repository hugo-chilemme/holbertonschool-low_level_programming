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
	int num = 48;

	for (; num <= 102; num++)
	{
		putchar(num);
		if (num == 57)
			num = 96;
	}
	putchar('\n');
	return (0);
}
