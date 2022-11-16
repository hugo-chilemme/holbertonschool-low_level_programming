#include "lists.h"

/**
 * free_listint - Function
 * @head: nodelist
 * Return: 0
 * Description: Free all node
 */
void free_listint(listint_t *head)
{
	if (!head)
		return;

	if (head->next)
		free_listint(head->next);

	free(head);
}
