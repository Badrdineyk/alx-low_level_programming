/*
 * File: 6-puts2.c
 * Auth: Badreddine Toumani
 */

#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 * starting with the first character.
 * @str: The string containing characters.
 */
void puts2(char *str)
{
	int length = 0;
	int index = 0;

	while (str[index++])
		length++;

	for (index = 0; index < length; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}
