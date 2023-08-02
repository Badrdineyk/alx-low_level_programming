/*
 * File: 100-is_palindrome.c
 * Auth: Badreddine Toumani
 */

#include "main.h"

int get_strlen(char *s);
int check_palindrome(char *s, int len, int i);
int is_palindrome(char *s);

/**
 * grt_strlen - Returns the length of a string.
 * @s: The string
 *
 * Return: The length of the string.
 */
int get_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += get_strlen(s + len);
	}

	return (len);
}

/**
 * check_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * @len: The length of s.
 * @i: The index of the string to be checked.
 *
 * Return: 1 if the string is palindrome,
 * or 0 if the string is not a palindrome.
 */
int check_palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);

	if (s[i] == s[len - i -1])
		return (check_palindrome(s, len, i + 1));

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if the string is a palindrome,
 * or 0 if the string is not a palindrome.
 */
int is_palindrome(char *s)
{
	int len = get_strlen(s);

	return (check_palindrome(s, len, 0));
}
