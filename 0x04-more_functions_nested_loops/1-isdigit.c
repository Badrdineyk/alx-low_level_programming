/*
 * File: 1-isdigit.c
 * Auth: Badreddine Toumani
 */

#include "main.h"

/**
 * _isdigit - Checks for a digit (0 through 9).
 * @c: The digit to be checked.
 *
 * Return: 1 if the c is the digit, 0 otherwise.
 */
int _isdigit(int c)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		if (digit == c)
			return (1);
	}

	return (0);
}
