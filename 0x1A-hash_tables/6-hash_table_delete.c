#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: The hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_table_t *head = ht;
	hash_node_t *new_node, *t;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			new_node = ht->array[i];
			while (new_node != NULL)
			{
				t = new_node->next;
				free(new_node->key);
				free(new_node->value);
				free(new_node);
				new_node = t;
			}
		}
	}
	free(head->array);
	free(head);
}
