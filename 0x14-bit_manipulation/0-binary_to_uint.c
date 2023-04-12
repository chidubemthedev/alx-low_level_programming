#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 *
 * @b: number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int length = 0;

	if (b[length] == '\0')
		return (0);

	while ((b[length] == '0') || (b[length] == '1'))
	{
		number <<= 1;
		number += b[length] - '0';
		length++;
	}

	return (number);
}
