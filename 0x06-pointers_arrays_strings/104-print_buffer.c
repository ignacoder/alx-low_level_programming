#include "main.h"
#include <stdio.h>

/**
 * print_buffer - a function that prints a buffer
 * @b: buffer.
 * @size: size of buffer.
 * Return: no return.
 */
void print_buffer(char *b, int size)
{
	int d, e, f;

	if (size <= 0)
		printf("\n");
	else
	{
		for (d = 0; d < size; d += 10)
		{
			printf("%.8x:", d);
			for (e = d; e < d + 10; e++)
			{
				if (e % 2 == 0)
					printf(" ");
				if (e < size)
					printf("%.2x", *(b + e));
				else
					printf("  ");
			}
			printf(" ");
			for (f = d; f < d + 10; f++)
			{
				if (f >= size)
					break;
				if (*(b + f) < 32 || *(b + f) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + f));
			}
			printf("\n");
		}
	}
}
