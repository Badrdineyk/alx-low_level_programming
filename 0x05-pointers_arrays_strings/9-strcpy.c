/*
 * File: 9-strcpy.c
 * Auth: Badreddine Toumani
 */

#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src,
 * including the terminating null byte(\0),
 * to the buffer pointed to by dest.
 * @dest: A buffer to copy the string to.
 * @src: The string to copy.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int index = -1;

	do {
		index++;
		dest[index] = src[index];
	} while (src[index] != '\0');

	return (dest);
}
