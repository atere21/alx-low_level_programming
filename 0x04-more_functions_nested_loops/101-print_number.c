#include "main.h"

/**
* print_number - outputs a number
* @n: an int given from main
*
*Then proceed with the code as normal.
*/


void print_number(int n)
{
	int x = n;
	int digit;
	int places = 1000000000;

	if (n < 0)/* E */
	{
		x = -n;
		putchar('-');
	}
	if (n == INT_MAX || n == INT_MIN) /* D */
	{
		while (1)
		{
			if (n == INT_MAX)
			{
				 putchar('2');
				 putchar('1');
				 putchar('4');
				 putchar('7');
				 putchar('4');
				 putchar('8');
				 putchar('3');
				 putchar('6');
				 putchar('4');
				 putchar('7');
				break;
			}
			else if (n == INT_MIN)
			{
				 putchar('2');
				 putchar('1');
				 putchar('4');
				 putchar('7');
				 putchar('4');
				 putchar('8');
				 putchar('3');
				 putchar('6');
				 putchar('4');
				 putchar('8');
				break;
			}
		}
	}
	else if (n == 0)/* A */
		putchar('0');
	else
	{
		while (places > x)/* B */
			places /= 10;
		while (places > 0)
		{
			digit = x / places;/* C */
			putchar((digit % 10) + '0');
			places /= 10;
		}
	}
}
