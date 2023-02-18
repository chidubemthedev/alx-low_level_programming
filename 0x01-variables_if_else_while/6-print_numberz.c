#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 - 9 using putchar
 */

int main(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
