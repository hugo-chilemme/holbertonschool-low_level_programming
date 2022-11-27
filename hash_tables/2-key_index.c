#include "hash_tables.h"

/**
 * key_index - Function
 * @key: value of element
 * @size: size
 * Return: hash_djb2 value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
