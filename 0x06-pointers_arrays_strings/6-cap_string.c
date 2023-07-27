/*
 * File: 6-cap_string.c
 * Auth: Badreddine Toumani
 */

#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	char *r = str;
	int index;
	int cap = 1;
	char a[] = " \t\n,.!?\"(){}";

	while (*str)
	{
		if (cap && *str >= 'a' && *str <= 'z')
			*str -= 32;

		cap = 0;

		for (index = 0; index < 12; index++)
		{
			if (*str == a[index])
				cap = 1;
		}

		str++;
	}

	return (r);
}
