#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet in a new line
 *
 * Return: void
 */
void print_alphabet(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;

	for (i = 0; alphabets[i] != '\0'; i++)
	{
		_putchar(alphabets[i]);
	}
}
