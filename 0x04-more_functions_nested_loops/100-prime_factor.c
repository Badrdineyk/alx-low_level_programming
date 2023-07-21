/*
 * File: 100-prime_factor.c
 * Auth: Badreddine Toumani
 */

#include <stdio.h>

/**
 * main - Finds and prints the largest prime factor of the
 * number 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int number = 612852475143;
	long int i;
	long int largest_factor;

	largest_factor = -1;

	while (number % 2 == 0)
	{
		largest_factor = 2;
		number /= 2;
	}

	for (i = 3; i * i <= number; i += 2)
	{
		while (number % i == 0)
		{
			largest_factor = i;
			number /= i;
		}
	}

	if (number > 2)
	{
		largest_factor = number;
	}

	printf("%ld\n", largest_factor);

	return (0);
}
