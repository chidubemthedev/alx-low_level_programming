#include <stdio.h>

/**
 * main - entry point
 *
 * Return: reversed string a - z
 */

int main(void)
{
	char a;

	a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
