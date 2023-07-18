/*
 * File: 8-24_hours.c
 * Auth: Badreddine Toumani
 */

#include "main.h"

/**
 * jack_bauer - Prints every minute of the of Jack Bauer,
 * starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 23; num1++)
	{
		for (num2 = 0; num2 <= 59; num2++)
		{
			_putchar('0' + (num1 / 10));
			_putchar('0' + (num1 % 10));
			_putchar(':');
			_putchar('0' + (num2 / 10));
			_putchar('0' + (num2 % 10));
			_putchar('\n');
		}
	}
}
