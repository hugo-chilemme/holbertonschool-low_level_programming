#include "lists.h"

/**
 * dlistint_len - Function
 * @h: node element
 * Return: Number of element in @h.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int Index = 0;

	while (h)
	{
		Index += 1;
		h = h->next;
	}
	return (Index);
}
