/*
 * File: 0-putchar.c
 * Auth: Badreddine Toumani
 */

#include <unistd.h>

/**
 * main - Prints _putchar without using any standard library.
 *
 * Return: Always 0.
 */
int main(void)
{
	write(1, "_putchar\n", 9);

	return (0);
}
