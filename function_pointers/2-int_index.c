#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - Entry point
 * @array: array of numbers
 * @size: size of @array
 * @cmp: compare function (if 0 is not egual else the index)
 * Return: Always 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	for (; i < size; i++)
	{
		int compare = (*cmp)(array[i]);

		if (compare != 0)
			return (i);

	}
	return (-1);
}
