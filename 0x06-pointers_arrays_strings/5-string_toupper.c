#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @str: pointer to the string to be modified
 * Return: pointer to the resulting string
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}

	return str;
}
