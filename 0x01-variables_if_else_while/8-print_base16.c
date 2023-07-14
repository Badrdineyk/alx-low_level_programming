/*
 * File: 8-print_base16.c
 * Auth: Badreddine Toumani
 */

#include <stdio.h>

/**
 * main - Prints the number of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');

	for (i = 0; i < 6; i++)
		putchar(i + 'a');

	putchar('\n');

	return (0);
}
