#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: buffer size
 *
 * Return: pointer to the result, or 0 if it cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, lenr, carry, sum;
	char *p1, *p2, *pr, *tmp;

	/* get lengths of n1 and n2 */
	for (len1 = 0; n1[len1]; len1++)
		;
	for (len2 = 0; n2[len2]; len2++)
		;

	/* make sure result buffer is big enough */
	if (len1 > size_r - 1 || len2 > size_r - 1)
		return (0);

	/* initialize pointers */
	p1 = n1 + len1 - 1;
	p2 = n2 + len2 - 1;
	pr = r + size_r - 1;
	*pr = '\0'; /* null-terminate result string */

	/* add digits, starting from right to left */
	carry = 0;
	for (lenr = 0; lenr < size_r - 1 && (p1 >= n1 || p2 >= n2); lenr++)
	{
		sum = carry;
		if (p1 >= n1)
			sum += (*p1-- - '0');
		if (p2 >= n2)
			sum += (*p2-- - '0');
		if (sum > 9)
		{
			carry = 1;
			sum -= 10;
		}
		else
			carry = 0;
		*--pr = sum + '0';
	}

	/* check for overflow */
	if (carry)
		return (0);

	/* remove leading zeros */
	while (*pr == '0')
		pr++;
	if (pr == r + size_r - 1)
		pr--;

	/* reverse result string */
	for (tmp = r; tmp < pr; tmp++, pr--)
	{
		*tmp ^= *pr;
		*pr ^= *tmp;
		*tmp ^= *pr;
	}

	return (r);
}

