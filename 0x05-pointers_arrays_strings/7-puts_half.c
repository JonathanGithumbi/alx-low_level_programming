#include "main.h"

/**
 * puts_half - Prints the second half of a string
 *
 * @str: The string to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0, i, n;

	/* Get the length of the string */
	while (str[length] != '\0')
		length++;

	/* If the length is odd, print the last n characters */
	n = (length % 2 == 0) ? length / 2 : (length - 1) / 2;
	for (i = n; i < length; i++)
		_putchar(str[i]);

	/* Print a newline character */
	_putchar('\n');
}

