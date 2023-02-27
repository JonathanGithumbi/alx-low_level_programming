#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: reversed string
 */
void rev_string(char *s)
{
	int len;
	int j;
	char tmp;

	len = 0;
	j = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	j = len - 1;
	len = 0;
	while (len < j)
	{
		tmp = s[len];
		s[len] = s[j];
		s[j] = tmp;
		len++;
		j--;
	}
}
