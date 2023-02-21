#include "main.h"

/**
 * print_alphabet_x10 - Printts the alphabet 10 times
 *
 * Returns: void
 */
void print_alphabet_x10(void)
{
	int i;

	i = 1;
	while (i <= 10)
	{
		int a;
		char message[] = "abcdefghijklmnopqrstuvwxyz\n";

		for (a = 0; message[a] != 0; a++)
		{
			_putchar(message[a]);
		}
		i++;
	}
}
