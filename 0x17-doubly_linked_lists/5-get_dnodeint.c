#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: The index of the node.
 *
 * Return: The nth node of a linked list or, NULL
 * if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *t;
	unsigned int i;

	t = head;
	for (i = 0; i < index; i++)
	{
		if (t == NULL)
			return (NULL);
		t = t->next;
	}
	return (t);
}
