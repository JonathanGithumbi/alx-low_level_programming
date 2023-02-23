#include "main.h"

/**
 * print_line - Draws a strighy line in th eterminal
 * @n: the number of times the character _is printed
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
