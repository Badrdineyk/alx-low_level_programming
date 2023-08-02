/*
 * File: 3-factorial.c
 * Auth: Badreddine Toumani
 */

#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to find the factorial of.
 *
 * Return: -1 if @n is lower than 0,
 * or the factorial of n if @n is greater than 0.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	else
		return n * factorial(n - 1);
}
