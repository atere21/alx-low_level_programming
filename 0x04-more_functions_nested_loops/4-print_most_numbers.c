#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: 0-9, excluding 2 and 4, followed by new line
 */
void print_most_numbers(void)
{
	int h;

	for (h = 0; h <= 9; h++)
	{
		if ((h == 2) || (h == 4))
			continue;
		else
			_putchar(h + '0');
	}
	_putchar('\n');
}
