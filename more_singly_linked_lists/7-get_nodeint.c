#include "lists.h"

/**
 * get_nodeint_at_index - Function
 * @head: nodelist
 * Return: index
 * Description: Return index of element (if not found return null);
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *checker = head;

	if (!head)
		return (NULL);

	if (index == 0)
		return (checker);

	while (checker->next)
	{		
		checker = checker->next;
		count++;
		if (count == index)
			return (checker);
	}
	return (NULL);


}
