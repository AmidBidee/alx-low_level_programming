#include "lists.h"
/**
 * add_nodeint_end - adds a node to at the end of a list
 * @head: address of head node
 * @n: data(int)
 * Return: address of new element or Null
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t  *new_node = (listint_t *)malloc(sizeof(listint_t));
	listint_t *last = *head;

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL && new_node != NULL)
	{
		*head = new_node;
		return (new_node);
	}

	for (; last->next != NULL; last = last->next)
		;
	last->next = new_node;

	if (last->next != new_node || new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	return (new_node);
}
