<<<<<<< HEAD
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
=======
#include "main.h"

/**
 * print_rev - prints a string in stdout in reverse
 * @s: string to print
 * Return: void
 */
void print_rev(char *s)
{

	int i = 0;

	while (*(s + i))
	i++;
	i = i - 1;
	while (i >= 0)
	{
		putchar(*(s + i));
		i--;
	}
	putchar('\n');
}
>>>>>>> 7480fcb56e34b00015143ec63615de9f37200d39
