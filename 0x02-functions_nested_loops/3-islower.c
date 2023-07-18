/*
 * File: 3-islower.c
 * Auth: Badreddine Toumani
 */

#include "main.h"

/**
 * _islower - Checks for lowercase character.
 * @c: The character to be checked.
 *
 * Return: 1 if the character is lowercase.
 * Otherwise 0.
 */
int _islower(int c)
{
	int i = 97;

	while (i <= 122)
	{
		if (c == i)
		{
			return (1);
		}

		i++;
	}

	return (0);
}
