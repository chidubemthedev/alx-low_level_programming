#include "main.h"

/**
 * _islower - checks for lowerCase char
 * @c: character to be checked
 *
 * Return: 1 if true, 0 oherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
