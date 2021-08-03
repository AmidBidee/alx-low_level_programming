#include "lists.h"
/**
 * pop_listint - deletes the head of a list
 * @head: address of head node
 * Return: head node's data(int)
 */

int pop_listint(listint_t **head)
{
	int h_data;
	listint_t *temp = *head;
	listint_t *nxt;

	if (*head == NULL)
		return (0);

	h_data = temp->n;
	nxt = temp->next;
	free(temp);
	*head = nxt;

	return (h_data);
}
