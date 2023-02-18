#include <stdio.h>

/**
 * main - entty point
 *
 * Return: hex numbers
 */

int main(void)
{
	char num;
	char num2;

	num = '0';
	num2 = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (num2 <= 'f')
	{
		putchar(num2);
		num2++;
	}
	putchar('\n');
	return (0);
}
