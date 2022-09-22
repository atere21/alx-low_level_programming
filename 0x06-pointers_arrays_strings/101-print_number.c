#include "main.h"
#include <stdio.h>

/**
  * print_number - Prints any integer with putchar
  * @n: Number to prints
  *
  * Return: Nothing
  */
void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		putchar('-');
		n *= -1;
	}

	x = n;
	if (x / 10)
	print_number(x / 10);
	putchar(x % 10 + '0');
        
        return (0);
}
