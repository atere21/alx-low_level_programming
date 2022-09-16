#include <stdio.h>

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: input number of times to print _
 * Return: a straight line
 */
void print_line(int n)
{
int co;

if (n <= 0)
{
putchar(n);
}
else
{
for (co = 1; co <= n; co++)
{
putchar(_);
}
putchar(n);
}
}
