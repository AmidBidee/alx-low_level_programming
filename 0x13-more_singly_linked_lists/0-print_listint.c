#include "lists.h"
/**
 * print_listint - print the all elements in a list_int
 * @h: list head pointer
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int node_len = 0;

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		node_len++;
	}

	return (node_len);
}
