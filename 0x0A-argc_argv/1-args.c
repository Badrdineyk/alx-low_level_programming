/*
 * File: 1-args.c
 * Auth: Badreddine Toumani
 */

#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array og pointers to the arguments.
 *
 * Return: 0.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
