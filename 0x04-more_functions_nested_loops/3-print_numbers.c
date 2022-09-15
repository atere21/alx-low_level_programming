#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints 0123456789\n
 *
 * Return: 0
 */


void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
        return (0);
}
