#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to print
 */
void print_number(int n)
{
    int digits = 1;
    int divisor = 1;
    int i;

    if (n < 0) {
        _putchar('-');
        n = -n;
    }

    while (n / divisor >= 10) {
        digits++;
        divisor *= 10;
    }

    for (i = 0; i < digits; i++) {
        int digit = (n / divisor) % 10;
        _putchar('0' + digit);
        divisor /= 10;
    }
}

