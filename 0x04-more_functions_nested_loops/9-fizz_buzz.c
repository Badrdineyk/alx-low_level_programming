/*
 * File: 9-fizz_buzz.c
 * Auth: Badreddine Toumani
 */

#include <stdio.h>

/**
 * main - Prints the numbers from 1 to 100, followed by a new line,
 * but for multiples of 3 print Fizz and for the multiples of 5
 * print Buzz.
 * For numbers which are multiples of both 3 and 5 print FizzBuzz.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i == 100)
			continue;

		putchar(' ');
	}

	putchar('\n');

	return (0);
}
