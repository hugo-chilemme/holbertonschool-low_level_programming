#include "hash_tables.h"

/**
 * hash_table_print - Function
 * @ht: array
 * Return: Number of element in @h.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int index = 0;
	hash_node_t *element;
	int is_first = 1;

	if (ht == NULL)
		return;


	printf("{");
	while (index < ht->size)
	{
		element = ht->array[index];
		while (element)
		{
			if (!is_first)
				printf(",");
			printf("'%s': '%s'", element->key, element->value);
			is_first = 0;
			element = element->next;
		}
		index++;
	}
	printf("}\n");

}
