/*
 * File: 4-print_rev.c
 * Auth: Badreddine Toumani
 */

#include "main.h"

/**
 * print_rev - Prints a string, in reverse, followed by a new line.
 * @s: The string to be reversed.
 */
void print_rev(char *s)
{
	int length = 0;
	int index;

	while (s[index++])
		length++;

	for (index = length - 1; index >= 0; index--)
	{
		_putchar(s[index]);
	}

	_putchar('\n');
}
