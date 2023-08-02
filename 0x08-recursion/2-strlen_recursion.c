/*
 * File: 2-strlen_recursion.c
 * Auth: Badreddine Toumani
 */

#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
		length += _strlen_recursion(s + 1) + 1;

	return (length);
}

