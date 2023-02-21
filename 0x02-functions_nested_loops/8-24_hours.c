#include "main.h"

/**
 * jack_bauer - prints eevery minute of every hhour  a day
 *
 * Return: Nada
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; minute < 60; minute++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			int h1 = hour / 10;
			int h2 = hour % 10;
			int m1 = minute / 10;
			int m2 = minute % 10;

			_putchar(h1 + '0');
			_putchar(h2 + '0');
			_putchar(':');
			_putchar(m1 + '0');
			_putchar(m2 + '0');
			_putchar('\n');
		}
	}
}

