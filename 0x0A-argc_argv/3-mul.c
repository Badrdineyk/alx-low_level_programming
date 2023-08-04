/*
 * File: 3-mul.c
 * Auth: Badreddine Toumani
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers.
 * @argc: The numbers of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 1 if the program does not receive two arguments,
 * 0 if the program receives two arguments.
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
