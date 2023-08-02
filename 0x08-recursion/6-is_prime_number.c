/*
 * File: 6-is_prime_number.c
 * Auth: Badreddine Toumani
 */

#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - Checks if a number is divisible.
 * @num: The number to be checked.
 * @div: The divisor.
 *
 * Return: 0 if the number is divisible,
 * or 1 if the number is not divisible.
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
	else if (div == num / 2)
		return (1);
	else
		return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 *
 * Return: 0 if the integer is not prime,
 * or 1 if the number is prime.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (is_divisible(n, 2));
}
