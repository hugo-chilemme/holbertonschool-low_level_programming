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

	while (target->next && seek <= index)
	{
		if (seek == index)
		{
			if (index > 0)
				lastNode->next = target->next;
			else
				*head = target->next;
			target->next->prev = lastNode;
			free(target);
			target = NULL;
			return (1);
		}
		lastNode = target;
		target = target->next;
		seek++;
	}
	if (index == 0)
	{
		free(*head);
		*head = NULL;
		return (1);
	}
	if (index <= seek)
	{
		free(target->next);
		free(target);
		(*head)->next = NULL;
		return (1);
	}
	return (-1);
}
