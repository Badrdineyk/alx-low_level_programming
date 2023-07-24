/*
 * File: 3-puts.c
 * Auth: Badreddine Toumani
 */

#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout.
 * @str: the string to be printed.
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
