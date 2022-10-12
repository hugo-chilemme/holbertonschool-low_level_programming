#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * rev_string - Entry point
 * @s : char of string
 * Return: Always 1 (True) or 0 (False)
 */
void rev_string(char *s)
{
	int i = 0;
	int t = 0;
	int len = 0;

	for (; s[i] != 0; i++)
		len++;

	len--;
	for (; t <= len / 2; t++)
	{
		char swipe = s[t];

		s[t] = s[len - t];
		s[len - t] = swipe;
	}
}
