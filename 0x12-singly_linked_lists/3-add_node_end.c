#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer to the head of the linked list.
 * @str: The string needs to be duplicated.
 *
 * Return: NULL - If the function fails.
 * Otherwise, the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int length;
	list_t *new;
	list_t *tail;

	if (head == NULL || str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (length = 0; str[length];)
		length++;

	new->len = length;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		tail = *head;
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = new;
	}

	return (*head);
}
