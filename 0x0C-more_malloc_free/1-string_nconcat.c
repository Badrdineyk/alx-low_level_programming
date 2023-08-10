#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes of s2.
 *
 * Return: A pointer to a newly allocated space in memory.
 * NULL if the function fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length_s1 = 0;
	unsigned int length_s2 = 0;
	unsigned int i, j;
	char *concat_str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[length_s1] != '\0')
		length_s1++;

	while (s2[length_s2] != '\0')
		length_s2++;

	if (n >= length_s2)
		n = length_s2;

	concat_str = malloc((length_s1 + n) + 1);

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < length_s1; i++)
		concat_str[i] = s1[i];

	for (j = 0; j < n; j++)
		concat_str[length_s1 + j] = s2[j];

	concat_str[length_s1 + n] = '\0';

	return (concat_str);
}
