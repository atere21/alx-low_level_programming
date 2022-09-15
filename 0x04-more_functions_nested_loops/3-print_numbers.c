#include "main.h"

 /**
 * print_numbers -  checks for a digit (0 through 9).
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int a;

	for (a = 48; a < 57; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
