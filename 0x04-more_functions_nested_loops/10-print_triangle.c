#include <stdio.h>

/**
 * print_triangle - a function that prints a triangle
 * @size: size of the triangle
 * Return: triangle of '#'s
 */
void print_triangle(int size)
{
	int sp, ro, tr;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (ro = 0; ro <= (size - 1); ro++)
		{
			for (sp = 0; sp < (size - 1) - ro; sp++)
			{
				putchar(' ');
			}
			for (tr = 0; tr <= ro; tr++)
			{
				putchar('#');
			}
			 putchar('\n');
		}
	}
}
