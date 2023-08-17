#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything
 * @format: A list of types of arguments passed to function.
 * @...: A variable number of arguments.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int p, i = 0;
	char *str;

	while (format)
	{
		va_start(ap, format);

		while (format[i])
		{
			p = 1;
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(ap, int));
					break;
				case 'i':
					printf("%d", va_arg(ap, int));
					break;
				case 'f':
					printf("%f", va_arg(ap, double));
					break;
				case 's':
					str = va_arg(ap, char *);
					if (!str)
						str = "(nil)";
					printf("%s", str);
					break;
				default:
					p = 0;
					break;
			}
			if (format[i + 1] && p)
				printf(", ");
			i++;
		}
		va_end(ap);
		break;
	}
	printf("\n");
}
