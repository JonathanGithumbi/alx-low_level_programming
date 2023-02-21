#include "main.h"

/**
 * print_last_digit - prints the last digit of the number sent to it
 * @n: the nunmber to be checked
 *
 * Return: last digit of the number
 */
int print_last_digit(int n)
{
	int a;

	a = (n % 10);

	if (a < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}
