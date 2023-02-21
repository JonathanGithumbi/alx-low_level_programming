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
		print_alphabet();
		i++;
	}
}
