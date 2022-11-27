#include "lists.h"


/**
 * delete_dnodeint_at_index - Function
 * @head: nodelist
 * @index: index to remove
 * Return: newNode
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	dlistint_t *node;
	dlistint_t *deleter;
	unsigned int i;

	if (!*head)
		return (-1);

	tmp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		tmp = tmp->next;
		if (!tmp)
			return (-1);
		if (!tmp->next)
		{
			tmp->prev->next = NULL;
			free(tmp);
			return (1);
		}
		deleter = tmp->prev;
		node = tmp->next;
		deleter->next = node;
		node->prev = deleter;
		free(tmp);
	}
	return (1);
}
