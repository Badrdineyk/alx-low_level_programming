/*
 * File: 2-strlen.c
 * Auth: Badreddine Toumani
 */

#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to get the length of.
 *
 * Return: The length of a string.
 */
int _strlen(char *s)
{
	int length = 0;

	for (; *s != '\0'; s++)
	{
		length++;
	}

	return (length);
}
