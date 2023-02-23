#include "main.h"

/**
 * more_numbers - entry point
 *
 * Return: print 0 - 14, 10 times
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i < 15; i++)
	{
		putchar('0' + i);
	}
}
