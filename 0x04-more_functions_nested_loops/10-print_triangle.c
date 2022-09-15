#include "main.h"

/**
 * print_triangle - prints a triangle of size size
 * @size: size of triangle
 *
 * Return: void
 */


void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
		putchar('\n');
	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size; b++)
		{
			if (b <= (size - a))
				putchar(' ');
			else
				putchar('#');
		}
		 putchar('\n');
	}

}
