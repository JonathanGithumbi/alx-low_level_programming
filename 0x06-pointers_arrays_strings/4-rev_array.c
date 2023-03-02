#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: an array of integers
 * @n: the number of elements in array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int temp;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
