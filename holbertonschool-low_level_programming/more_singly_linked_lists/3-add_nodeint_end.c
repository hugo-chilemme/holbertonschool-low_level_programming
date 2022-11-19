#include "lists.h"

/**
 * add_nodeint_end - Function
 * @head: nodelist
 * @n: new value element
 * Return: new node list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *lastNode = *head;

	if (!newNode)
	{
		free(newNode);
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (!*head)
	{
		*head = newNode;
		return (newNode);
	}

	while (lastNode->next)
		lastNode = lastNode->next;

	lastNode->next = newNode;
	return (newNode);
}
