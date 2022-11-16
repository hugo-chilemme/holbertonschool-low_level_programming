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

	while (checker->next)
	{
		if (count == index)
			return (checker);

		checker = checker->next;
		count++;
	}
	return (NULL);


}
