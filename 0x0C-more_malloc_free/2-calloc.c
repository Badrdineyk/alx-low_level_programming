#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb: The number of elements of an array.
 * @size: The size of each element in bytes
 *
 * Return: A pointer to the allocated memory.
 * NULL if @nmemb or @size is 0 or if malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *allocated_mem;
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	allocated_mem = malloc(nmemb * size);

	if (allocated_mem == NULL)
		return (NULL);

	ptr = allocated_mem;

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (allocated_mem);
}
