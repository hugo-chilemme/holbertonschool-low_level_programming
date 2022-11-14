#include "lists.h"

/**
 * list_len - Function
 * @h: linked list
 * Description: print a linked list
 * Return: length of linked list
 */
size_t list_len(const list_t *h)
{
	if (!h)
		return (0);

	if (h->str)
	{
		if (h->next)
			return (1 + list_len(h->next));
		return (1);
	}
	return (0);

}
