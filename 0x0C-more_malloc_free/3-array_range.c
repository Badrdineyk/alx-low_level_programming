#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * @min: The min value.
 * @max: The max value.
 *
 * Return: A pointer to the newly created array.
 * NULL - if @min > @max or if malloc function fails.
 */
int *array_range(int min, int max)
{
	int size;
	int *arr_int;
	int i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr_int = malloc(sizeof(int) * size);

	if (arr_int == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr_int[i] = min + i;

	return (arr_int);
}
