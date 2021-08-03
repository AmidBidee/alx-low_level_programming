#include "lists.h"
/**
 * sum_listint - returns sum of all data of a listint_t linked list
 * @head: pointer to head
 * Return: sum(int)
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
