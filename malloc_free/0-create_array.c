#include "main.h"
#include <stdlib.h>
/**
 * create_array - point
 * @size : size of buffer
 * @c : contains per char
 * Return: Always 1 (True) or 0 (False)
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(sizeof(char) * size);
	unsigned int index = 0;

	if (size == 0)
		return ('\0');

	for (; index < size; index++)
	{
		array[index] = c;
	}

	return (array);
}
