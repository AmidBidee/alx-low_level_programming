#include "lists.h"
/**
 * list_len - prints length of list
 * @h: pointer to list
 * Return: list lenght
 */
size_t list_len(const list_t *h)
{
	int len = 0;

	for (; h != NULL; h = h->next)
		len++;
	return (len);
}
