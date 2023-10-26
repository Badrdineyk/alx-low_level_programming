#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1.
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j, length;
	unsigned int num = 0;

	i = 0;
	j = 1;
	length = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		length++;
		i++;
	}

	for (i = 0; i < length; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num = num + ((b[i] - '0') << (length - j));
		j++;
	}

	return (num);
}
