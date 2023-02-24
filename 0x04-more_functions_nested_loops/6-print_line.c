#include "main.h"

/**
 * print_line - entry point
 * @n: number of lines to print
 *
 * Result: The lines
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n);
	} else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
