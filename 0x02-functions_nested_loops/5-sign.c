#include "main.h"

/**
 * print_sign - entry point
 * @n: the number to check with
 *
 * Return: 1 if greater, 0 if same, -1 if less
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
	return (0);
}
