#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @s: The string to encode
 *
 * Return: A pointer to the encoded string
 */
char *rot13(char *s)
{
	char *p = s;
	int i, j;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (s[i] == alpha[j])
			{
				_putchar(rot13[j]);
				break;
			}
		}
		if (alpha[j] == '\0')
			_putchar(s[i]);
	}

	return (p);
}

