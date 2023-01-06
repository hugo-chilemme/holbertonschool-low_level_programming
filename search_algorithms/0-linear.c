#include "search_algos.h"
/**
 * linear_search - Entry point
 * @array : array
 * @size : size of @array
 * @value : find value in @array
 * Return: Always 0 (Success)
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	while (index < size)
	{
		printf("Value checked array[%li] = [%i]\n", index, array[index]);
		if (value == array[index])
			return (index);
		index += 1;
	}
	return (-1);
}
