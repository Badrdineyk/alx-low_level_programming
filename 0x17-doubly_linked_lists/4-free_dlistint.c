#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: A pointer to the head of the list.
 *
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *t;

	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
}
