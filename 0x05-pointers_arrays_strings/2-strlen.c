#include "main.h"

/*
 * _strlen - a function that returns the length of a s
 * tring
 * @s: char input
 * Return: length of the input string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	return (i);
}
