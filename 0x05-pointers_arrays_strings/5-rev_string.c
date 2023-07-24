/*
 * File: 5-rev_string.c
 * Auth: Badreddine Toumani
 */

#include "main.h"

/**
 * rev-string - Reverses a string.
 * @s: The string to be reversed.
 */

void rev_string(char *s)
{
	int index = 0;
	int length = 0;
	char temp;

	while (s[index++])
		length++;

	for (index = 0; index < length / 2; index++)
	{
		temp = s[index];
		s[index] = s[length - 1 - index];
		s[length - 1 - index] = temp;
	}
}
