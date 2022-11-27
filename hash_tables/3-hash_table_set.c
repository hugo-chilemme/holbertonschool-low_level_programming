#include "hash_tables.h"

/**
 * hash_table_set - Function
 * @ht: array
 * @key: key of new element
 * @value: value of new element
 * Return: New element.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *element = malloc(sizeof(hash_node_t));
	hash_node_t *new = malloc(sizeof(hash_node_t));

	int keyindex;

	if (!key || !new || !value || !ht)
	{
		free(new);
		free(element);
		return (0);
	}

	keyindex = key_index((const unsigned char *)key, ht->size);
	element = ht->array[keyindex];

	while (element)
	{
		if (element->key == key)
		{
			free(element->value);
			element->value = strdup(value);
			if (!element->value)
				return (0);
			return (1);
		}
		element = element->next;
	}

	new->key = strdup(key);
	new->value = strdup(value);

	if (!ht->array[keyindex])
	{
		ht->array[keyindex] = new;
		return (1);
	}
	new->next = ht->array[keyindex];
	ht->array[keyindex] = new;
	return (1);
}
