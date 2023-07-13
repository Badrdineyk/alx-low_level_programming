/*
 * File: 6-size.c
 * Auth: Badreddine Toumani
 */

#include <stdio.h>

/**
 * main - Prints the size of various types on the computer
 * it is compile and tun on.
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long));
	printf("Size of a long long: %lu byte(s)\n", sizeof(long long));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
}	
