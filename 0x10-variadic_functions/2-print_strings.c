#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 * @...: The variable number of arguments.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int index;
	char *s;

	va_start(ap, n);

	for (index = 0; index < n; index++)
	{
		s = va_arg(ap, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ap);
}
