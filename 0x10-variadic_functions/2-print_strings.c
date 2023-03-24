#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: value between two strings
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *s;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(string, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (separator && i != n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(strings);
}
