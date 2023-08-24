#include "lists.h"
#include <stdio.h>

/**
 * print_list -  Prints all the elements of a list_t list.
 * @h: The member of the structure
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nod = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		h = h->next;
		nod++;
	}
	return (nod);
}
