#include "lists.h"
/**
 * add_nodeint_end - adds a node to at the end of a list
 * @head: address of head node
 * @n: data(int)
 * Return: address of new element or Null
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t  *new_node;
	listint_t *last = *head;

	while (last != NULL && last->next != NULL)
		last = last->next;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (last != NULL)
		last->next = new_node;
	else
		*head = new_node;

	return (new_node);
}
