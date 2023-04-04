#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches for bytes in a string
 * @s: source string
 * @accept: second string
 *
 * Return: s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
