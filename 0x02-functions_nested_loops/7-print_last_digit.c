#include <stdio.h>
/**
 * a function that prints the last digit of a number.
 *
 * Return: l
 */
int print_last_digit(int n)
{
	int l, p; 
	l = n % 10;
	if (l < 0)
	l = -l;
	p = '0' + l;
	putchar(p);
	return (0);
}
