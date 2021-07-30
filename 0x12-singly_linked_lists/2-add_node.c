#include "lists.h"
/**
 * add_node - adds new node at the start linked list
 * @head: address of head
 * @str: string data of node
 * Return: address of new element else NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	new_node->str = strdup(str);
	new_node->len = _strlen(strdup(str));
	new_node->next = (*head);

	(*head) = new_node;

	if ((*head) == new_node)
		return (new_node);
	else
		return (NULL);
	free(*head);
}
