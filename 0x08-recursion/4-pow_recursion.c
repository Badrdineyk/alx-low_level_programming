/*
 * File: 4-pow_recursion.c
 * Auth: Badreddine Toumani
 */

#include "main.h"

/**
 * _pow_recursion - Returns the value of @x raised to the power of @y.
 * @x: The integer to be raised.
 * @y: The power.
 *
 * Return: The value of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}