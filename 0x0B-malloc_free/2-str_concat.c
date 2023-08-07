#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the newly allocated space in memory,
 * otherwise, NULL if NULL is passed or if concatenation fails.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	int s1_length = 0;
	int s2_length = 0;
	char *concat_str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[s1_length] != '\0')
		s1_length++;

	while (s2[s2_length] != '\0')
		s2_length++;

	concat_str = (char *) malloc((s1_length + s2_length + 1) * sizeof(char));

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < s1_length; i++)
		concat_str[i] = s1[i];

	for (j = 0; j < s2_length; j++)
		concat_str[s1_length + j] = s2[j];

	concat_str[s1_length + s2_length] = '\0';

	return (concat_str);
}

