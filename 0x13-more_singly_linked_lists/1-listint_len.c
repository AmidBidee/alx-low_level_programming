#include "lists.h"
/**
 * listint_len - return number of elements in a linked listint_t list
 * @h: pointer to the list head node
 * Return: number(int) of elements
 */

size_t listint_len(const listint_t *h)
{
	int list_len = 0;

	for (; h != NULL; h =  h->next)
		list_len++;

	return (list_len);
}
