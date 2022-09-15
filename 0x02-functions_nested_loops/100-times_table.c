#include "main.h"

/**
* print_times_table - print times tables from zero to n
* @n: integer
*/

void print_times_table(int n)
{
int a = 0;

if (n >= 0 && n <= 15)
{
while (a <= n)
{
int b = 1;

putchar(0);
while (b <= n)
{
int p = a * b;

putchar(,);
putchar( );
if (p < 10)
{
putchar( );
putchar( );
putchar(p + 0);
}
else if (p > 99)
{
putchar((p / 100) + 0);
putchar(((p / 10) % 10) + 0);
putchar((p % 10) + 0);
}
else
{
putchar( );
putchar((p / 10) + 0);
putchar((p % 10) + 0);
}
b++;
}
putchar(n);
a++;
}
}
} 
}
