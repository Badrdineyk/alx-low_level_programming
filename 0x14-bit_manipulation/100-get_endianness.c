#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	int number;
	char *end;

	number = 1;
	end = (char *)&number;

	if (*end == 1)
		return (1);

	return (0);
}
