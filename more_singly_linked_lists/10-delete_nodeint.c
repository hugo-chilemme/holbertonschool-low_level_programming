#include "lists.h"

/**
 * delete_nodeint_at_index - Function
 * @head: nodelist
 * @index: index to remove
 * Return: newNode
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *target = *head;
	listint_t *lastNode;

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

	if (index >= seek)
	{
		free(target->next);
		(*head)->next = NULL;
		return (1);
	}

	return (-1);
}
