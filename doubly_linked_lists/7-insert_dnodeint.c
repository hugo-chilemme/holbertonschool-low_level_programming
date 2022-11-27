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
	dlistint_t *next = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *last;

	unsigned int seek = 0;

	if (!h || !new)
	{
		free(new);
		return (NULL);
	}

	new->prev = NULL;
	new->next = NULL;
	new->n = n;

	while (next)
	{
		if (idx == seek)
		{
			new->prev = last;
			new->next = next;
			if (last)
				last->next = new;
			next->prev = new;


			return (new);
		}
		last = next;
		next = next->next;
		seek++;
	}
	last->next = new;
	return (new);

}
