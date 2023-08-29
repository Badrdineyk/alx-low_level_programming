#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: A pointer to the address of the head
 * @n: The integer for the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_ele;
	listint_t *last_ele;

	new_ele = malloc(sizeof(listint_t));
	if (new_ele == NULL)
		return (NULL);

	new_ele->n = n;
	new_ele->next = NULL;

	if (*head == NULL)
	{
		*head = new_ele;
		return (new_ele);
	}

	last_ele = *head;

	while (last_ele->next != NULL)
	{
		last_ele = last_ele->next;
	}

	last_ele->next = new_ele;

	return (new_ele);
}
