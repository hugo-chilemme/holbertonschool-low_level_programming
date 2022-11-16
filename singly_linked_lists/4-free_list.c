#include "lists.h"

/**
 * free_list - Function
 * @head: node list
 * Description: add element in a  linked list
 * Return: void
 */
void free_list(list_t *head)
{
	if (head->next)
		free_list(head->next); 

	free(head->str);
	free(head);
}
