/*
 * File: 0-memset.c
 * Auth: Badreddine Toumani
 */

#include "main.h"

/**
 * _memset - Fills the first @n bytes of the memory area
 * pointed to by @s with the constant byte @b.
 * @s: Starting address of memory area to be filled.
 * @b: The value to be filled in the memory area with.
 * @n: Number of bytes to be filled.
 *
 * Return: A pointer to the memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = b;

	return (s);
}
