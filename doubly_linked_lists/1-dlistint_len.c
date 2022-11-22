#include "lists.h"

/**
 * dlistint_len - Function
 * @h: node element
 * Return: Number of element in @h.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int Index = 1;

	while (h)
	{
		Index += 1;
		h = h->prev;
	}
	return (Index);
}
