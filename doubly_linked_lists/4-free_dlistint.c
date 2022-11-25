#include "lists.h"



void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;

	while (head->next)
	{
		printf("%i", head->n);
		head = head->next;
		free(head->prev);
	}
	free(head);

}
