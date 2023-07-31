/*
 * File: 1-memcpy.c
 * Auth: Badreddine Toumani
 */

#include "main.h"

/**
 * _memcpy - Copies @n bytes from memory area @src to
 * memory area @dest.
 * @src: The source memory area to copy characters from.
 * @dest: A pointer to the memory area to copy @src into.
 * @n: The number of bytes to copy from @src.
 *
 * Return: A pointer to memory area @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		dest[index] = src[index];

	return (dest);
}
