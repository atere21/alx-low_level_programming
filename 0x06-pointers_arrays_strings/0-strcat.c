#include "main.h"

/**
 * main -function appends the src stri
 * ng to the dest string
 * _strcat - appends src to the dest s * @dest: string to append by src
 * @src: string to append to dest
 * Return: two concat string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
