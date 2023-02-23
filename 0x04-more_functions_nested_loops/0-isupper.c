#include "main.h"

/**
 * _isupper - get number to check for
 * @c: the integer number
 *
 * Return: 1 if true, 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	return (0);
}
