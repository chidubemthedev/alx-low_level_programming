#include <stdio.h>

/**
 * main - entry point
 *
 * Return: alphabet without e and q
 */

int main(void)
{
	char x;

	x = 'a';

	while (x <= 'z')
	{
		if (x == 'e' || x == 'q')
		{
			x++;
		}
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
