#include <stdio.h>

/**
 * main - entry point
 *
 * Return: single digit combinations
 */

int main(void)
{
	int x;

	for (x = 42; x <= 57; x++)
	{
		putchar((char)x);
	}

	if (x != 57)
	{
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
