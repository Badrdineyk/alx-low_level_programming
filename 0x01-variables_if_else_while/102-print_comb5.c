/*
 * File: 102-print_comb5.c
 * Auth: Badreddine Toumani
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers,
 * ranging from 0 to 99.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar('0' + (i / 10));
			putchar('0' + (i % 10));
			putchar(' ');
			putchar('0' + (j / 10));
			putchar('0' + (j % 10));

			if (i == 98 && j == 99)
			{
				continue;
			}

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
