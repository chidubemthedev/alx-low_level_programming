#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 - 9 using putchar
 */

int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
