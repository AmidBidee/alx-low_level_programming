#include "lists.h"
/**
 * add_node - adds new node at the start linked list
 * @head: address of head
 * @str: string data of node
 * Return: address of new element else NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dstr = strdup(str);

	list_t *new_node = malloc(sizeof(list_t));

	new_node->str = dstr;
	new_node->len = _strlen(dstr);
	new_node->next = (*head);

	(*head) = new_node;

	if ((*head) == new_node)
		return (new_node);
	else
		return (NULL);
}
