/*
 * File: 5-sqrt_recursion.c
 * Auth: Badreddine Toumani
 */

#include "main.h"

int _sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * _sqrt - Finds the natural square root of an number.
 * @num: The number to find the square root of.
 * @root: The root.
 *
 * Return: The square root,
 * or -1 if the number does not have a natural square root.
 */
int _sqrt(int num, int root)
{
	if (root * root == num)
		return (root);
	else if (root == num / 2)
		return (-1);
	else
		return (_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 *
 * Return: The natural square root of @n,
 * or -1 if @n does not have a natural sqare root.
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (_sqrt(n, root));
}
