#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: nothing
 */
void times_table(void)
{
	int n, m, result;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			result = n * m;
			if (m == 0)
			{
				_putchar(result + '0');
			}

			if (result < 10 && m != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else if (result >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
