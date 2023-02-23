#include "main.h"

/**
 * _isdigit - gets numeric input and check for 0 -9
 * @c: the number to check
 *
 * Return: 1 if true, else 0
 */

int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
	{
		return (1);
	}
	return (0);
}
