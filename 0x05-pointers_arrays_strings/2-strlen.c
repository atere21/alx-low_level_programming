#include "main.h"
#include <stdio.h>

/*
 * _strlen - a function that returns the length of a
 * string
 * @s: char input
 * Return: length of s 
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	return (i);
}
