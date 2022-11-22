#include "lists.h"

/**
 * print_dlistint - Function
 * @h: node element
 * Return: Number of element in @h.
 */
size_t print_dlistint(const dlistint_t *h)
{
	if (!h)
		return (0);

	if (h->n)
	{
		printf("%i\n", h->n);
		if (h->next)
			return (1 + print_dlistint(h->next));
		return (1);
	}
	return (0);
}
