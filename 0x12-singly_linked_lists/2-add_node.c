#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to the head of the linked list.
 * @str: The string to be needs to be duplicated.
 *
 * Return: NULL - If the function fails.
 * Otherwise, the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int length;

	if (head == NULL || str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}

	for (length = 0; str[length];)
		length++;

	new->len = length;
	new->next = *head;

	*head = new;

	return (new);
}
