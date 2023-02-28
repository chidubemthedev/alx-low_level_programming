#include "main.h"

/**
 * print_rev - entry point
 * @s: string to reverse
 *
 * Return: reversed string
 */

void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] == '\0')
	{
		for (j = i - 1; j >= i; j--)
		{
			_putchar(s[j]);
		}
		i++;
	}
	_putchar('\n');

}
