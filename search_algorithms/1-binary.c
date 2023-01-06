#include "search_algos.h"
/**
 * binary_search - Entry point
 * @array : array
 * @size : size of @array
 * @value : find value in @array
 * Return: Always 0 (Success)
 */
int binary_search(int *array, size_t size, int value)
{
	size_t index = 0;
	size_t moitier = 0;
	size_t test_max = size;

	moitier = size / 2;
	if (value < array[moitier])
		test_max = moitier;
	else
		index = moitier;

	while (index < test_max)
	{
		if (array[index] == value)
			return (index);
		index += 1;
	}
	return (-1);
}
