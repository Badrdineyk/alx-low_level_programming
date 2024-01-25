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
	dlistint_t *t, *p = *h;
	unsigned int i;

	if (idx == 0)
	{
		t = malloc(sizeof(dlistint_t));
		if (t == NULL)
			return (NULL);
		t->n = n;
		t->prev = NULL;
		t->next = *h;
		(*h)->prev = t;
		*h = t;
		return (t);
	}
	for (i = 0; i < idx - 1; i++)
	{
		p = p->next;
	}
	t = malloc(sizeof(dlistint_t));
	if (t == NULL)
		return (NULL);
	t->n = n;
	t->next = p->next;
	t->prev = p;
	p->next = t;
	if (p->next)
		p->next->prev = t;
	p->next = t;
	return (t);
}
