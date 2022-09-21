#include "main .h"

/**
<<<<<<< HEAD
 * 1-strncat - a function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 * @n: input of max bytes to be used
 * Return: Always 0 (Success)
=======
 * 1-strcat - appends src to the dest
 * string
 * @dest: string to append by src
 * @src: string to append to dest
 *
 * Return: address of dest
>>>>>>> 2419d182440d2654c4c7ebcd61601f855aee973d
 */
char *_strncat(char *dest, char *src, int n)
{
<<<<<<< HEAD
int i, co;
=======
	int i, j;
>>>>>>> 2419d182440d2654c4c7ebcd61601f855aee973d

for (i = 0; dest[i] != 0; i++)
{
}

for (co = 0; co < n; co++)
{
dest[i + co] = src[co];
if (src[co] == 0)
co = n;
}

return (dest);
}
