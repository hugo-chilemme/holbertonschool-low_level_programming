#include "lists.h"

/**
 * print_listint - Function
 * @h: node list
 * Description: print element and return number of node
 * Return: length of node list
 */
size_t print_listint(const listint_t *h)
{
	if (!h)
		return (0);

	printf("%i\n", h->n);

	if (h->next)
		return (1 + print_listint(h->next));
	return (1);
}
