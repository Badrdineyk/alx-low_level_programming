#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to the head of the list.
 * @n: Data to be added.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *t;

	t = malloc(sizeof(dlistint_t));
	if (t == NULL)
		return (NULL);
	t->n = n;
	t->prev = NULL;
	t->next = *head;
	if ((*head))
		(*head)->prev = t;
	*head = t;
	return (t);
}

