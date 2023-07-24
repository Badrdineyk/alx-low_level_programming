/*
 * File: 8-print_array.c
 * Auth: Badreddine Toumani
 */

#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers.
 * @a: The array of integers
 * @n: The number of elements of the array to be printed.
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == (n - 1))
			continue;

		printf(", ");
	}

	printf("\n");
}
