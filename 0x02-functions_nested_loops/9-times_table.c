#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the times table of an integer starting with zero
 *
 * Return: Always 0.
 */
void times_table(void)
{
int x, y, product;
for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
product = x * y;
if (y != 0)
{
putchar(',');
putchar(' ');
}
if (y == 0)
{
putchar('0');
}
else if (product >= 10)
{
putchar((product / 10) + '0');
putchar((product % 10) + '0');
}
else if ((product < 10) && (y != 0))
{
putchar(' ');
putchar((product % 10) + '0');
}
}
putchar('\n');
}
}
