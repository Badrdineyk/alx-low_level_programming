/*
 * File: 3-strspn.c
 * Auth: Badreddine Toumani
 */

#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string be scanned.
 * @accept: The string containing the characters to mach.
 *
 * Return: The number of bytes in the initial segment of @s
 * which consist only of bytes from @accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int index;
	unsigned int length = 0;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				length++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (length);
		}

		s++;
	}

	return (length);
}
