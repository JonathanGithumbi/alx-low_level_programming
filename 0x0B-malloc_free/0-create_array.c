#include "main.h"

/**
 * create_array - Creates an array of chars.
 * @size: The size of the array to create.
 * @c: The char to initialize the array with.
 *
 * Return: If size == 0 or memory allocation fails - NULL.
 *         Otherwise - a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}

