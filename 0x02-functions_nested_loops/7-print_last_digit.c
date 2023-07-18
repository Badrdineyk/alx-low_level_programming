/*
 * File: 7-print_last_digit.c
 * Auth: Badreddine Toumani
 */

#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to be checked.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit = last_digit * -1;

	_putchar('0' + last_digt);

	return (last_digit);
}
