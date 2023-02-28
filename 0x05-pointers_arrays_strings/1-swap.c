#include "main.h"

/**
 * swap_int - swaps the value of two ints
 * @a: first value
 * @b: second value
 *
 * Return: swapped values
 */

void swap_int(int *a, int *b)
{
	int temp;
	int temp2;

	temp = a;
	temp2 = b;

	a = temp2;
	b = temp;
}
