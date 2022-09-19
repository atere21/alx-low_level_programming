#include "main.h"

/** 
 * rev_string - reverse a string
 * @s: string to reverse
 *
 * Return: void
 */ 
void rev_string(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	i = i - 1;
	while (i >=0)
	{
		putchar(*(s + i));
		i--;
	}
	putchar("\n");
}
