#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: pointer to head
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *nxt;

	while (current != NULL)
	{
		nxt = current->next;
		free(current);
		current = nxt;
	}

}
