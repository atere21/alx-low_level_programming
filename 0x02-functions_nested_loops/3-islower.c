#include <stdio.h>
/**
 * _islower - a function that checks for lowercase character
 * @c: single letter input
 * Return: 1 if int c is lowercase, 0 if otherwise
 */
int_islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
