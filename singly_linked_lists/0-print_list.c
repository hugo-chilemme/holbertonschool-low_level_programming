#include "lists.h"

/**
 * print_list - Function
 * @h: linked list
 * Description: print a linked list
 * Return: length of linked list
 */
size_t print_list(const list_t *h)
{
	int len = 0;
	if(!h)
		return (0);
	
	len = h->len;
	if (!h->str)
		len = 0;

	printf("[%i] %s\n", len, h->str);

	if (h->next)
		return (1 + print_list(h->next));
	return (1);
}
