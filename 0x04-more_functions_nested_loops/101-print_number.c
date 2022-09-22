#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: An input integer
 * Return: Nothing
 */
void print_number(int n)
{
	if (n == 0)
		putchar('0');
	else if (n < 0)
	{
		putchar('-');
		print_integer(n * -1);
	}
	else
		print_integer(n);
}
