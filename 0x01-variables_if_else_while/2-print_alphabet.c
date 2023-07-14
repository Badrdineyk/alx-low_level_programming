/*
 * File: 2-print_alphabet.c
 * Auth: Badreddine Toumani
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase,
 * followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
