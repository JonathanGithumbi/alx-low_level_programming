#include "main.h"

/**
 * largest_number - Function Returns the largest of 3 numbers
 * @a: the first number
 * @b: the second number
 * @c: the third number
 * Return: the largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
		largest = a;
	else if (a > b && a < c)
		largest = c;
	else if (a < b && a > c)
		largest = b;
	else if (b > a && b > c)
		largest = b;
	else if (b > a && b < c)
		largest = c;
	else if (b < a && b > c)
		largest = a;
	else if (c > b && c > a)
		largest = c;
	else if (c > b && c < a)
		largest = a;
	else if (c < b && c > a)
		largest = b;
	else if (a == b && c > a)
		largest = c;
	else if (a == b && c < a)
		largest = a;
	else if (b == c && a > c)
		largest = a;
	else if (b == c && a < c)
		largest = c;
	else if (c == a && b > a)
		largest = b;
	else if (c == a && b < a)
		largest = a;
	else if (a == b && b == c)
		largest = a;

	return (largest);
}
