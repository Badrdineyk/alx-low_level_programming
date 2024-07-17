#include "search_algos.h"

/**
  * binary_search_recursive - Searches recursively for a value.
  * @array: A pointer to the first element of the subarray
  * @left: The starting index of the subarray
  * @right: The ending index of the subarray
  * @value: The value to search for.
  *
  * Return: If the value is not present, -1.
  */
int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value)
		return (i);
	if (array[i] > value)
		return (binary_search_recursive(array, left, i - 1, value));
	return (binary_search_recursive(array, i + 1, right, value));
}

/**
  * binary_search - Searches for a value in a sorted array
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (binary_search_recursive(array, 0, size - 1, value));
}
