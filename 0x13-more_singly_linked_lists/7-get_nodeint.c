#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node, starting at 0.
 *
 * Return: NULL - If the node does not exist.
 * Otherwise - the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nod = 0;
	listint_t *h;

	h = head;
	while (h != NULL)
	{
		if (nod == index)
		{
			return (h);
		}

		nod++;
		h = h->next;
	}

	return (h);
}
