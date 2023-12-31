/*
 * File: 2-print_alphabet_x10.c
 * Auth: Badreddine Toumani
 */

#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char letter;

	while (i < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}

		_putchar('\n');
		i++;
	}
}
