#include <stdio.h>

/**
 * main - C program print numbers of base 10 from 0 to 9 by putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
