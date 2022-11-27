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
	dlistint_t *checker = *h;
	dlistint_t *lastNode;
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	unsigned int seek = 0;

	if (!newNode)
	{
		free(newNode);
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0 || !*h)
	{
		newNode->next = *h;
		*h = newNode;
		return (newNode);
	}

	while (checker)
	{
		if (seek == idx)
		{
			lastNode->next = newNode;
			newNode->prev = lastNode;
			newNode->next = checker;
			checker->prev = newNode;
			return (newNode);
		}
		lastNode = checker;
		checker = checker->next;
		seek++;

		if (!checker && seek == idx)
		{
			newNode->prev = lastNode;
			lastNode->next = newNode;
			return (newNode);
		}
	}
	return (NULL);
}
