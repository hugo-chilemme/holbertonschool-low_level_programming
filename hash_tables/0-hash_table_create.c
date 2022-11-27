#include "hash_tables.h"

/**
 * hash_table_create - Function
 * @size: size of array
 * Return: hash tables
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *array = malloc(sizeof(hash_table_t));

	if (!array || size == 0)
	{
		free(array);
		return (NULL);
	}

	array->size = size;
	array->array = malloc(sizeof(hash_table_t *) * size);
	if (!array->array)
	{
		free(array->array);
		free(array);
		return (NULL);
	}
	return (array);
}
