#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Entry point
 * @array: array of numbers
 * @size: size of @array
 * @action: out function to call array[size_t]
 * Return: Always 0.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	for (; i < size; i++)
		(*action)(array[i]);
}
