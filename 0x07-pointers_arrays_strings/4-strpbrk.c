/*
 * File: 4-strpbrk.c
 * Auth: Badreddine Toumani
 */

#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The Set of bytes to be searched for.
 *
 * Return: A pointer to the matched byte.
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
