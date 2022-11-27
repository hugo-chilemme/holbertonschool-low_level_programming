#include "lists.h"


/**
 * free_dlistint - Function
 * @head: node element
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{

	while (head)
	{
		if (head->prev)
			free(head->prev);

		if (!head->next)
			break;

		head = head->next;
	}
	free(head);

}
