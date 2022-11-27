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
	hash_node_t *element;

	if (!ht || !key)
		return (NULL);

	keyindex = key_index((const unsigned char *)key, ht->size);
	element = ht->array[keyindex];

	while (element)
	{
		if (strcmp(element->key, key) == 0)
			return (element->value);
		element = element->next;
	}
	return (NULL);
}
