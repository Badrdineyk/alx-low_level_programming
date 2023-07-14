/*
 * File: 6-print_numberz.c
 * Auth: Badreddine Toumani
 */

#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10,
 * starting from 0,
 * without using any variable of type char.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}

	putchar('\n');

	return (0);
}
