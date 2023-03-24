#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - variadic function to add all arguments
 * @n: number of arguments
 *
 * Return: sum of all arguments
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list list;

	if (n == 0)
	{
		return (0);
	}

	va_start(list, n);

	sum = 0;

	for (i = 0, i < n; i++)
	{
		sum = sum + va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
