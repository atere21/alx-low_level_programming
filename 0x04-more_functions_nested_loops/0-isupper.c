#include "main.h"

/**
 * main - entry point
 *
 * Description: Prints Holberton with _putchar
 *
 * Return: always 0
 */

int main(void)
{
int i = 0;
char c;
char s[] = "Holberton\n";

while (i <= 9)
{
<<<<<<< HEAD
c = s[i];
_putchar(c);
i++;
}
return (0);
=======
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
>>>>>>> 124c48f6728c6517fe106f17edd440c0f9bb3d61
}
