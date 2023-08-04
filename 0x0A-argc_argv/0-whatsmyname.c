/*
 * File: 0-whatsmyname.c
 * Auth: Badreddine Toumani
 */

#include <stdio.h>

/**
 * main - Prints the name of the program.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
