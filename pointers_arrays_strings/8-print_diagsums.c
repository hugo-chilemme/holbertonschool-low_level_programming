#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Main
 * @a : value
 * @s : val
 *
 * Return: s or null
 */
void print_diagsums(int *a, int s)
{
	int i = 0;
	int t = 0;
	int f = 0;

	for (; i < s * s; i = i + (s + 1))
		t = t + a[i];

	for (i = s - 1; i < s * s - 1; i = i + (s - 1))
		f += a[i];
	printf("%d, %d\n",  t, f);
}
