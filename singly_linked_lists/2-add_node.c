#include "lists.h"

/**
 * add_node - Function
 * @h: linked list
 * Description: print a linked list
 * Return: length of linked list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *suit = malloc(sizeof(list_t));
	if (!head)
		return (0);
	
	suit->str = strdup(str);
	suit->len = strlen(str);
	suit->next = *head;
	*head = suit;
	return (suit);
}
