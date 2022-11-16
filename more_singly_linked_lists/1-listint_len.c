#include "lists.h"

/**
 * listint_len - Function
 * @h: node list
 * Description: return number of node
 * Return: length of node list
 */
size_t listint_len(const listint_t *h)
{
	if (!h)
		return (0);

	if (h->next)
		return (1 + listint_len(h->next));
	return (1);
}
