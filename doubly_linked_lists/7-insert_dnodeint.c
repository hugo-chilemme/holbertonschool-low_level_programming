#include "lists.h"

/**
 * insert_dnodeint_at_index - Function
 * @h: node element
 * @idx: index of new element
 * @n: value of new node
 * Return: New node, else NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	unsigned int seek = 0;

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = NULL;
	new->prev = NULL;
	new->n = n;

	if (*h == NULL)
	{
		*h = new;
		return (new);
	}
	while (seek <= idx)
	{
		tmp = tmp->next;
		if (!tmp)
			return (NULL);
		seek += 1;
	}
	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new->prev = tmp;
	new->next = tmp->next;
	tmp->next = new;
	tmp = new->next;
	tmp->prev = new;
	return (new);
}
