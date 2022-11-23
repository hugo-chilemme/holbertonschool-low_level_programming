#include "lists.h"

/**
 * add_dnodeint_end - Function
 * @head: linked list
 * @n: add element
 * Return: New node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *last = *head;

	if (!head || !new)
	{
		return (0);
	}
	new->n = n;

	while (last && last->next)
		last = last->next;


	if (!last)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	last->next = new;
	new->prev = last;

	return (new);
}