#include "lists.h"

/**
 * add_node_end - Function
 * @head: linked list
 * @str: add this new element
 * Description: add element in a  linked list
 * Return: the new element
 */
void free_list(list_t *head)
{
	list_t *cache = head;
	
	while (cache->next)
	{
		if (!cache->next)
			free(cache);

		cache = cache->next;
	}	
	free(head);
}
