#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at index of a listint_t.
 * @head: A pointer to the address of the head
 * @index: the index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *cpy;
	unsigned int nod = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	cpy = *head;

	while (cpy != NULL)
	{
		if (index == nod + 1)
		{
			temp = cpy->next;
			cpy->next = temp->next;
			free(temp);
			return (1);
		}
		if (index == 0)
		{
			*head = cpy->next;
			free(cpy);
			return (1);
		}

		cpy = cpy->next;
		nod++;
	}

	return (-1);
}
