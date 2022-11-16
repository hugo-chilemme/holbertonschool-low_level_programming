#include "lists.h"

/**
 * free_list - Function
 * @head: node list
 * Description: add element in a  linked list
 * Return: void
 */
size_t print_listint(const listint_t *h)
{
	printf("%i\n", h->n);

	if (h->next)
		return (1 + print_listint(h->next));
	return (1);
}
