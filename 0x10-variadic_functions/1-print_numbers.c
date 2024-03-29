#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints numbers fllowed by a new line
 *
 * @separator: string between two numbers
 * @n: number of integers
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));

		if (separator && i != n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(numbers);
}
