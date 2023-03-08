#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 * 
 * Return: 1 if the string is a palindrome
 */
int is_palindrome(char *s)
{
	int len = 0;
	char *start, *end;

	while (*(s + len))
	{
		len++;
	}

	start = s;
	end = s + len - 1;

	if (*start == *end)
	{
		if (len <= 2)
		{
			return (1);
		}
		else
		{
			return (is_palindrome(start + 1) && is_palindrome(end - 1));
		}
	}
	return (0);
}

