#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n).
 * @head: A pointer to the head of the listint_t.
 *
 * Return: 0 - If the list is empty.
 * Otherwise - the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	unsigned int s = 0;

	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}

	return (s);
}
