/*
 * File: 101-print_number.c
 * Auth: Badreddine Toumani
 */

#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	unsigned int number = n;

	if (n < 0)
	{
		_putchar('-');
		number = -number;
	}

	if ((number / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
