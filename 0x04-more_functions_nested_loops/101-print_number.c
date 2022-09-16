#include <stdio.h>
#include "main.h"

/**
  * print_number - Prints an integer.
  * @n: The integer to prints.
  *
  * Return: Nothing!
  */
void print_number(int n)
{
unsigned int k = n;

if (n < 0)
{
n *= -1;
k = n;
putchar('-');
}

k /= 10;

if (k != 0)

putchar(k);
putchar((unsigned int) n % 10 + '0');

}
