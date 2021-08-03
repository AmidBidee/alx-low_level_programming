#include "lists.h"
/**
 * free_listint2 - frees a listint_t list and sets head to NULL
 * @head: pointer to head node
 */

void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *nxt;

	while (current != NULL)
	{
		nxt = current->next;
		free(current);
		current = nxt;
	}

	*head = NULL;
}
