#include "lists.h"

/**
 * sum_listint - Function
 * @head: nodelist
 * Return: sum of all node list
 * Description: Count all value of node list
 */
int sum_listint(listint_t *head)
{
	if (!head)
		return (0);

	return (head->n + sum_listint(head->next));
}
