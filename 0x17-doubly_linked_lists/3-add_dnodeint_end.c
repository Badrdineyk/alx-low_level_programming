#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: A pointer to the head of the list.
 * @n: Data to be added.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *t, *last;

	t = malloc(sizeof(dlistint_t));
	if (t == NULL)
		return (NULL);
	t->n = n;
	t->next = NULL;

	if (*head == NULL)
	{
		t->prev = NULL;
		*head = t;
		return (t);
	}
	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = t;
	t->prev = last;

	return (t);
}
