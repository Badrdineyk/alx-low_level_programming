#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string to be copied.
 *
 * Return: On success: a pointer to the duplicated string,
 * or NULL if insufficient memory was available, or str = NULL.
 */
char *_strdup(char *str)
{
	int i, length = 0;
	char *dup;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	dup = (char *) malloc((length + 1) * sizeof(char));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		dup[i] = str[i];

	return (dup);
}
