#include "lists.h"

/**
 * insert_nodeint_at_index - Function
 * @head: nodelist
 * @idx: index to add
 * @n: value of node
 * Return: newNode
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *checker = *head;
	listint_t *lastNode;
	listint_t *newNode = malloc(sizeof(listint_t));
	unsigned int seek = 0;

	if (!newNode || !*head)
	{
		free(newNode);
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;
	
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}	

	while (checker)
	{
		if (seek == idx)
		{
			lastNode->next = newNode;
			newNode->next = checker;

			return (newNode);
		}
		lastNode = checker;
		checker = checker->next;
		seek++;
		if(!checker && seek == idx)
		{
			lastNode->next = newNode;
			
			return (newNode);
		}
	}
	return (NULL);
}
