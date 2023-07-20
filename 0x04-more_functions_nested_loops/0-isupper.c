/*
 * File: 0-isupper.c
 * Auth: Badreddine Toumani
 */

#include "main.h"

/**
 * _isupper - Checks for uppercase character.
 * @c: Character to be checked.
 *
 * Return: 1 if the character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	char letter;
	
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		if (letter == c)
			return (1);
	}

	return (0);
}
