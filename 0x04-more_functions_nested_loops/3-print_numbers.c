#include "main.h"

/**
<<<<<<< HEAD
 * print_numbers -  checks for checks for a digit (0 through 9).
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
int a;

for (a = 48; a < 58; a++)
{
_putchar(a);
}
_putchar(n);
=======
  * print_numbers - Print the numbers since 0 up to 9
  *
  * Return: The numbers since 0 up to 9
  */
void print_numbers(void)
{
	int b;

	for (b = 0; b <= 9; b++)
	{
		_putchar(b + '0');
	}

	_putchar('\n');
>>>>>>> 124c48f6728c6517fe106f17edd440c0f9bb3d61
}
