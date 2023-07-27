/*
 * File: 7-leet.c
 * Auth: Badreddine Toumani
 */

#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: String to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int index = 0;
	char *r = str;
	char a[] = {'a', 'e', 'o', 't', 'l'};
	char n[] = {4, 3, 0, 7, 1};

	while (*str)
	{
		for (index = 0; index < 5; index++)
		{
			if (*str == a[index] || *str == a[index] - 32)
				*str = n[index] + '0';
		}

		str++;
	}

	return (r);
}
