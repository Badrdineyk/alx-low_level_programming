/*
 * File: 4-rev_array.c
 * Auth: Badreddine Toumani
 */

#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: An array of integers.
 * @n: The number of elements to swap.
 */
void reverse_array(int *a, int n)
{
	int index;
	int temp;

	for (index = n - 1; index >= n / 2; index--)
	{
		temp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = temp;
	}
}
