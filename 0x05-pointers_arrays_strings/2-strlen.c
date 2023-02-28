#include "main.h"

/**
 * _strlen - entry point
 * @s: string value
 *
 * Return: int
 */

int _strlen(char *s)
{
	int x = 0;

	while (*s != '\0')
	{
		x++;
	}
	return (x);
}
