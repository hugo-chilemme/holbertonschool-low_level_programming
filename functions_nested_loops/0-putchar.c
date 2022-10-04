#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "_putchar.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char arr[] = "_putchar";
	long unsigned int i = 0;

	for (; i < sizeof(arr) - 1; i++)
		putchar(arr[i]);
	return (0);
}
