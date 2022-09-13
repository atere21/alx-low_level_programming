#include <stdio.h>
/**
 * print_sign - a function that prints the sign of a number
 * @n: number input
 * Return: 1 prints + if n > 0, 0 prints 0 if n = 0, -1 prints - if n < 0
 */
int print_sign(int n)
{
if (n > 0)
{
putchar(43);
return (1);
}
else if (n < 0)
{
putchar(45);
return (-1);
}
else
{
putchar(48);
return (0);
}
}
