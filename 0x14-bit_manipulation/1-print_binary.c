#include "main.h"

/**
 * print_binary - get binary number
 *
 * @n: integer number to convery
 *
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
