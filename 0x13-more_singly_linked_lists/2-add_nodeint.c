#include "lists.h"
/**
 * add_nodeint - adds a node at the beginning of a listint_t list
 * @head: address of head pointer
 * @n: integer data to be added
 * Return: address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	*head = new_node;

	if (temp == NULL)
		new_node->next = NULL;
	else
		new_node->next = temp;

	return (new_node);
}
