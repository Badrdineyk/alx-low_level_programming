#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: A pointer to the address of the  head of the listint_t
 *
 * Return: 0 - If the linked list is empty.
 * Otherwise - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int d;

	if (*head == NULL)
		return (0);

	tmp = *head;
	*head = tmp->next;
	d = tmp->n;

	free(tmp);

	return (d);
}
