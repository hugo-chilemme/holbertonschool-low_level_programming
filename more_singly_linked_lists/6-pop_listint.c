#include "lists.h"

/**
 * pop_listint - Function
 * @head: nodelist
 * Return: 0
 * Description: Delete first element and return node list remaining
 */
int pop_listint(listint_t **head)
{
	listint_t *target = *head;
	listint_t *suite;
	int cache_num;

	if (!*head)
		return (0);

	suite = NULL;
	if (target->next)
		suite = target->next;

	cache_num = target->n;

	free(target);
	*head = suite;
	return (cache_num);

}
