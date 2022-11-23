#include "lists.h"

/**
 * dlistint_len - Function
 * @h: node element
 * Return: Number of element in @h.
 */
size_t dlistint_len(const dlistint_t *h)
{
	if (!h)
		return (0);

	if (h->n)
	{
		if (h->prev)
			return (1 + dlistint_len(h->prev));
		return (1);
	}
	return (0);
}
