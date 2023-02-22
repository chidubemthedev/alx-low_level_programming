#include "main.h"

/**
 * _isLower - checks for lowerCase char
 * @c: character to be checked
 *
 * Return: 1 if true, 0 oherwise
 */

int _isLower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
