#include "main.h"

/*
 * strlen - returns the length of a s
 * tring
 * @s: string to find length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	return (i);
}
