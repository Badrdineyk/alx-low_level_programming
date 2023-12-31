/*
 * File: 4-print_most_numbers.c
 * Auth: Badreddine Toumani
 */

#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0 to 9,
 * except 2 and 4, followed by a new line.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
	}

	_putchar('\n');
}
