/*
 * File: 2-strncpy.c
 * Auth: Badreddine Toumani
 */

#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;
	int src_length = 0;

	while (src[index++])
		src_length++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_length; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
