#include "lists.h"

/**
 * get_dnodeint_at_index - Function
 * @head: node list
 * @index: target node
 * Return: if node exist else return null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int seek = 0;
	dlistint_t *tmp = head;

	if (!head)
		return (NULL);

	if (index == 0)
		return (head);

	while (seek < index)
	{
		if (!tmp)
			return (NULL);

		tmp = tmp->next;
		seek += 1;
	}
	return (tmp);
}
