#include "main.h"

/**
 * _atoi - entry point
 * @s: string
 *
 * Return: integer from string
 */

int _atoi(char *s)
{
	int x;

	x = (int) *s;

	if (!x)
	{
		return (0);
	}

	return (x);
}
