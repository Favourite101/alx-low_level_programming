#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: maiin string
 * @accept: other string
 *
 * Return: common bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int n, i, j = 0;
	char *str = "";

	for (i = 0; s[i]; i++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[i] == accept[i])
			{
				str[j] = accept[i];
				j++;
			}
		}

	}
	n = sizeof(*str) / sizeof(str[0]);

	return (n);
}
