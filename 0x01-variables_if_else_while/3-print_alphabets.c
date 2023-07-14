/*
 * File: 3-print_alphabets.c
 * Auth: Badreddine Toumani
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	char lowercase_char;
	char uppercase_char;

	for (lowercase_char = 'a'; lowercase_char <= 'z'; lowercase_char++)
		putchar(lowercase_char);

	for (uppercase_char = 'A'; uppercase_char <= 'Z'; uppercase_char++)
		putchar(uppercase_char);

	putchar('\n');

	return (0);
}
