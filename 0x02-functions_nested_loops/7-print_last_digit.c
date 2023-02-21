#include "main.h"

/**
 * print_last_digit - prints the last digit of a nnumber
 * @num: The number being operated on.
 * Return: Always 0.
 */
int print_last_digit(int num)
{
	int last_digit;

	if (num < 0)
	{
		num = -num;
	}

	last_digit = num % 10;
	_putchar(last_digit);
	return (last_digit);
}
