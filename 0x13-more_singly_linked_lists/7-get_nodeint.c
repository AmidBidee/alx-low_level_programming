#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to head node
 * @index: index of node
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head != NULL)
			head = head->next;
		else
			return (NULL);
		i++;
	}

	if (head != NULL)
		return (head);
	else
		return (NULL);
}
