#include <stdlib.h>

int putchar(char c);

/**
 * print_number - prints numbers
 * @n: number to be printed
 * Return: void
 */
void print_number(int n)
{
	unsigned int n1 = 0;

	if (n < 0)
	{
		n1 = -n;
		putchar('-');
	}
	else
	{
		n1 = n;
	}

	if (n1 / 10)
	{
		print_number(n1 / 10);
	}
	 putchar((n1 % 10) + '0');
}
