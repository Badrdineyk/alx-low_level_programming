#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters.
 * @...: A variable number of parameters.
 *
 * Return: If n == 0 - 0.
 * Otherwise, the sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int index;
	unsigned int sum = 0;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (index = 0; index < n; index++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);

	return (sum);
}
