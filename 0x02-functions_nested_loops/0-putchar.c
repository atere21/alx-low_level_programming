#include "main.h"
/**
 * main - Write a program that prints putchar, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *sh = "main";

	while (*sh)
	{
		putchar(*sh);
		sh++;
	}
	putchar('\n');

	return (0);
}
