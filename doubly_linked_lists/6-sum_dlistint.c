#include "lists.h"

/**
 * sum_dlistint - Function
 * @head: node element
 * Return: Sum of all value (n) in @head.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tmp = head;

	if (!head)
		return (0);

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
