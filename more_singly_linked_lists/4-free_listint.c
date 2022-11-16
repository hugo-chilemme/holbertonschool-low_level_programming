#include "lists.h"

/**
 * add_nodeint_end - Function
 * @head: nodelist
 * @n: new value element
 * Return: new node list
 */
void free_listint(listint_t *head)
{
	if (head->next)
		free_listint(head->next);
	
	free(head);
}
