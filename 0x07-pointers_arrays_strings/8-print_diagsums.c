/*
 * File: 8-print_diagsums.c
 * Auth: Badreddine Toumani
 */

#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int index;
	int sum1 = 0;
	int sum2 = 0;

	for (index = 0; index < size; index++)
	{
		sum1 += a[index];
		sum2 += a[size - index - 1];
		a += size;
	}

	printf("%d, %d\n", sum1, sum2);
}
