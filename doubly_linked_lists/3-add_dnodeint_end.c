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
	dlistint_t *last;

	if (!new)
	{
		free(new);
		return (0);
	}


	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (new);
	}

	last = *head;
	while (last && last->next)
		last = last->next;


	last->next = new;
	new->prev = last;
	return (new);
}
