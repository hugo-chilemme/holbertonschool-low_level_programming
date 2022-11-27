#include "hash_tables.h"


/**
 * hash_table_get - Function
 * @ht: array element
 * @key: receive key
 * Return: Value else null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int keyindex;

	if (!ht || !key)
		return (NULL);

	keyindex = key_index((const unsigned char *)key, ht->size);

	if (!ht->array[keyindex])
		return (NULL);
	return (ht->array[keyindex]->value);
}
