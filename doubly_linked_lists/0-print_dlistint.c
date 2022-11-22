#include "lists.h"

/**
 * print_dlistint - Function
 * @h: node element
 * Return: Number of element in @h.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int Index = 1;

	if (!h)
		return (0);

	while (h)
	{
		Index += 1;
		printf("%i\n", h->n);
		h = h->prev;
	}

	return (Index);
}
