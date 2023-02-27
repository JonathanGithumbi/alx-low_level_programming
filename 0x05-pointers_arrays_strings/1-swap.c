#include "main.h"

/**
 * swap_int - swaps 2 integers
 * @a: int 1
 * @b: int 2
 */
void swap_int(int *a, int *b)
{
	int intermediate;

	intermediate = *a;
	*a = *b;
	*b = intermediate;
}
