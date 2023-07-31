/*
 * File: 2-strchr.c
 * Auth: Badreddine Toumani
 */

#include "main.h"

/**
 * _strchr - Locates a character in a srting.
 * @s: The string to be searched.
 * @c: The character to be located.
 *
 * Return: A Pointer to the first occurrence of the character @c
 * in the string @s,
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
