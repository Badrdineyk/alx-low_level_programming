#include "lists.h"

/**
 * list_len - Gets the number of elements in a linked list_t list.
 * @h: The member of the structure
 *
 * Return: The number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	size_t el = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		el++;
		h = h->next;
	}
	return (el);
}
