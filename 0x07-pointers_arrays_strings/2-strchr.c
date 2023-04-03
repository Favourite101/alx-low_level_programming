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

	while (1)
	{
		i = *s++;
		if (i == c)
		{
			return (s - 1);
		}
	}

	return (NULL);
}
