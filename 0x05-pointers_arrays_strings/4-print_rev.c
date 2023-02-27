#include "main.h"

/**
 * _strlen - returns length of string
 * @s: string
 * Return: length of  string
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * print_rev - prints a string in reverse
 * @s: the string to be reversed
 * Return: nothing
 */
void print_rev(char *s)
{
	int len;

	for (len = _strlen(s) - 1; len >= 0; len--)
	{
		_putchar(*(s + len));
	}
	_putchar('\n');
}
