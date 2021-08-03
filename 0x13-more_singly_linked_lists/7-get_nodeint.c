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
	listint_t *current = head;

	while (i < index)
	{
		if (current)
			current = current->next;
		else
			return (NULL);
		i++;
	}

	if (current)
		return (current);
	else
		return (NULL);
}
