#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: A pointer to the address of the head.
 * @idx: is the index of the list where the new node should be added.
 * @n: The integer for the new node to contain.
 *
 * Return: NULL - If the function fails.
 * Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *copy;
	listint_t *new;
	unsigned int nod = 0;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	copy = *head;

	while (copy != NULL)
	{
		if (nod + 1 == idx)
		{
			new->next = copy->next;
			copy->next = new;
			return (new);
		}
		nod++;
		copy = copy->next;
	}

	free(new);

	return (NULL);
}
