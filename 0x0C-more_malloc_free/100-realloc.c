#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size of the allocated space for @ptr in bytes.
 * @new_size: The new size of the new memory block in bytes.
 *
 * Return: A pointer to the reallocated memory block.
 * NULL - if new_size == 0 and ptr is not NULL.
 * ptr - if the new_size == old_size.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *new_all;
	unsigned int dup_size;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_all = malloc(new_size);

		if (new_all == NULL)
			return (NULL);

		return (new_all);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_all = malloc(new_size);

	if (new_all == NULL)
		return (NULL);

	if (old_size < new_size)
		dup_size = old_size;
	else
		dup_size = new_size;

	for (i = 0; i < dup_size; i++)
		*((char *)new_all + i) = *((char *)ptr + i);

	free(ptr);
	return (new_all);
}
