#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
if (*s == 0)
{
putchar(n);
return;
}
putchar(*s);
puts_recursion(s + 1);
}
