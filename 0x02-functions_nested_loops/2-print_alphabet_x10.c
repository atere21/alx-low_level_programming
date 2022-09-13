#include <stdio.h>
/**
  * print_alphabet_x10 - Make alphabet x10 times
  *
  * Return: void
  */
void print_alphabet_x10(void)
{
int n, co;
co = 0;
while (co < 10)
{
for (n = 'a'; n <= 'z'; n++)
{
putchar(n);
}
co++;
putchar('\n');
	}
}
