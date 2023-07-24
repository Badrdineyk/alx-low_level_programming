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
	int length = 0;
	int index = 0;

	while (src[index++])
		length++;

	for (index = 0; index < length; index++)
		*(dest + index) = src[index];

	return (dest);
}
