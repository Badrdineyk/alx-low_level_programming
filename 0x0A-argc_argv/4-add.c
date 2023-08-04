/*
 * File: 4-add.c
 * Auth: Badreddine Toumani
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers.
 * @argc: The numbers of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 1 if one the numbers contains symbols that are not digits.
 * Otherwise return 0.
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);

	}

	printf("%d\n", sum);

	return (0);
}
