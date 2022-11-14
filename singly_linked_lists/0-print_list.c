#include "lists.h"

/**
 * print_list - Function
 * @h: linked list
 * Description: print a linked list
 * Return: length of linked list
 */
size_t print_list(const list_t *h)
{
	if(!h)
		return (0);

	if (!h->str)
		printf("[0] (nil)\n");
	else 
		printf("[%i] %s\n", h->len, h->str);

	if (h->next)
		return (1 + print_list(h->next));
	return (1);
}
