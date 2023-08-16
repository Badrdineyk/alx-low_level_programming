#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 * @array: The array.
 * @size: The number of the elements in the array.
 * @cmp: A pointer to the function to be used to compare values.
 *
 * Return: (-1) - if no element matches or the size <= 0.
 * Otherwise, the index of the first element for which the cmp
 * function does not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
