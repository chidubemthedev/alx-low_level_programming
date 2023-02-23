#include "main.h"

/**
 * _isupper - get number to check for
 * @c: the integer number
 *
 * Return: 1 if true, 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	} else
	{
	return (0);
	}
}
