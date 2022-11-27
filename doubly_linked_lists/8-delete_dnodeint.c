#include "lists.h"


/**
 * delete_dnodeint_at_index - Function
 * @head: nodelist
 * @index: index to remove
 * Return: newNode
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *target = *head;
	dlistint_t *lastNode;

	unsigned int seek = 0;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(*head);
		return (1);
	}
	while (seek < index)
	{
		if (!target)
			return (-1);

		if (!target->next)
		{
			target->prev-next = NULL;
			free(target);
			return (1);
		}

		target->prev->next = target->next;
		target->next->prev = target->prev;
		free(target);
	}
	
	return (1);
}
