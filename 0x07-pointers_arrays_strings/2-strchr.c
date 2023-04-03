#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: pointer or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			return (s[i]);
		}
	}

	return (NULL);
}
