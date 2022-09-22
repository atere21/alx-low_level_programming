#include "main.h"

/**
 * print_buffer - prints a s bytes of a buffer
 * @c: buffer to print
 * @s: bytes of buffer to print
 * @l: line of buffer to print
 *
 * Return: void
 */

void print_buffer(char *b, int size);
{
	int i = 0, j;

	if (size < 0)
	{
		printf('\n');
		return;
        }
	while (i < size)
        {	
		if (i % 10 ==0)
			printf("%08x: ", i);
                for (j = i; j < i + 9; j += 2)
	        {
                 if ((j < size) && ((j + 1) < size))
                 Printf("%2x%02x: ", b[j], b[j] <= 126)
			else
                        { 
                         while(++j <= i + 10)
                         printf(" ");
                         
                 }
