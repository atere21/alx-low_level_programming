#include <stdio.h>

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */

void jack_bauer(void)
{
	int h, m, i, j, k, l;

	for (h = 0; h < 24; h++)
	{
		i = h / 10;
		j = h % 10;
		for (m = 0; m < 60; m++)
		{
			k = m / 10;
			l = m % 10;
			putchar('0' + i);
			putchar('0' + j);
			putchar(':');
			putchar('0' + k);
			putchar('0' + l);
			putchar('\n');
		}
	}
}
