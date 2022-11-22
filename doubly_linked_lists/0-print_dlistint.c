#include "lists.h"

/**
 * print_dlistint - Function
 * @h: node element
 * Return: Number of element in @h.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int Index = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		Index+=1;
	}
	return (Index);
}
