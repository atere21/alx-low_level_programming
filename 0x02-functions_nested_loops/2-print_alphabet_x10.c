<<<<<<< HEAD
void print_alphabet_x10(void);
=======
#include <stdio.h>
/**
 * print_alphabet_x10 -  prints the alphabet x10
 *
 */
void print_alphabet_x10(void)
{
	int alpha;
	int alpha2;

	for (alpha = 0; alpha <= 9; alpha++)
	{
		for (alpha2 = 'a'; alpha2 <= 'z'; alpha2++)
		{
			_putchar(alpha2);
		}
		_putchar('\n');
	}
}
>>>>>>> 506bcd6d845bb8762bc888258e64a5e44097459e
