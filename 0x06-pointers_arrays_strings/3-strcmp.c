/*
 * File: 3-strcmp.c
 * Auth: Badreddine Toumani
 */

#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: Pointer to the first string to be compared.
 * @s2: Pointer to the second string to be compared.
 *
 * Return: 0 if strings are equal
 * >0 if the first non-matching character in s1 is greater
 * (in ASCII) than that of s2.
 * <0 if the first non-matching character in s1 is lower
 * (in ASCII) than that of s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
