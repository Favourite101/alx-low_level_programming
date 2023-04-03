#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: pointer or NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	int j;
	char *ptr = &c;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		if (s[j] == c)
		{
			c = s[j];
			break;
			return (ptr);
		}
	}

	return (NULL);
}
