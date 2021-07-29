#include "lists.h"

size_t print_list(const list_t *h)
{
	int i = 0;

	for (; h != NULL; h = h -> next)
	{
		if (h -> str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h -> len, h -> str);
		i++;
	}
	return (i);
}
