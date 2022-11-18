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

	while (seek <= index)
	{
		if (target->next)
		{
			if (seek == index)
			{
				if (lastNode->next)
					lastNode->next = target->next;
				else if(target->next)
					*head = target->next;
				else 
					*head = lastNode->next;
				free(target);
				target = NULL;
				return (1);
			}
		}
		else if (seek == index)
		{
			free(target);
			lastNode->next = NULL;
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
	return (-1);
}
