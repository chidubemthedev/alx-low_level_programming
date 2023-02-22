#include "main.h"

/**
 * print_last_digit - prints last digit of num
 * @num: the inputted number
 *
 * Return: the last digit
 */

int print_last_digit(int num)
{
	int x = num % 10;

	if (x < 0)
	{
		return (_putchar('0' + -x));
	}

	return (_putchar('0' + x));
}
