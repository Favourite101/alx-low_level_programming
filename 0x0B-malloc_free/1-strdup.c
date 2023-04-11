#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a duplicate string
 * @str: string to be copied
 *
 * Return: pointer to duplicate string
 */
char *_strdup(char *str)
{
	int len = 0, i;
	char *dup;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	dup = malloc(sizeof(*str) * len + 1);
	if (dup == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		dup[i] = str[i];
	}
	dup[i] = '\0';

	return (dup);
}
