#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * add_node - adds new node at the start linked list
 * @head: address of head
 * @str: string data of node
 * Return: address of new element else NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dstr = strdup(str);
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL || dstr == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = *head;
	new_node->str = dstr;
	new_node->len = _strlen(dstr);
	*head = new_node;

	return (new_node);
}
