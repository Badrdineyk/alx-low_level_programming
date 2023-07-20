/*
 * File: 10-print_triangle.c
 * Auth: Badreddine Toumani
 */

#include "main.h"

/**
 * print_triangle - Prints a triangle, using the # character.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int i;
	int h;

	if (size > 0)
	{
		for (h = 1; h <= size; h++)
		{
			for (i = size - h; i > 0; i--)
			{
				_putchar(' ');
			}

			for (i = 0; i < h; i++)
			{
				_putchar('#');
			}

			if (h == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
