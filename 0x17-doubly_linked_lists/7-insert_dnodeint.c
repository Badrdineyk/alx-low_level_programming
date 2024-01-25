#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: A pointer to the head of the list.
 * @idx: the index of the list where the new node should be added.
 * @n: The number to be added.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *t, *p;

	t = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		t = t->next;
		if (t == NULL)
			return (NULL);
	}

	if (t->next == NULL)
		return (add_dnodeint_end(h, n));

	p = malloc(sizeof(dlistint_t));
	if (p == NULL)
		return (NULL);

	p->n = n;
	p->prev = t;
	p->next = t->next;
	t->next->prev = p;
	t->next = p;

	return (p);
}
