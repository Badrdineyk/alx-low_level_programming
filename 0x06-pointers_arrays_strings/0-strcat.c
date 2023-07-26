/*
 * File: 0-strcat.c
 * Auth: Badreddine Toumani
 */

#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the string to be concatenated upon.
 * @src:The sourcr string to be appended to @dest
 *
 * Return: Pointer to the resulting string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_length = 0;

	while (dest[index++])
		dest_length++;

	for (index = 0; src[index]; index++)
		dest[dest_length + index] = src[index];

	return (dest);
}
