#include "main.h"

/**
 * _abs - gets value
 * @num: number to be processed
 *
 * Return: the absolute value
 */

int _abs(int num)
{
	if (num >= 0)
	{
		return (num);
	} else if (num < 0)
	{
		return (-num);
	}
	return (0);
}
