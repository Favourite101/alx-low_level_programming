#include "main.h"

/**
 * rot13 - using the rot13 enryption
 * @s: string to be encrypted
 *
 * Return: pointer to the string containing the encrypted format
 */
char *rot13(char *s)
{
	char *a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *b = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == a[j])
		{
			while (j < 52)
			{
				s[i] = b[j];
				j++;
			}
		}
	}

	return (s);
}
