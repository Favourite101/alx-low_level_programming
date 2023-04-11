#include "main.h"
#include <stdlib.h>

/**
 * strdup - returns a pointer to a duplicate string
 * @str: string to be copied
 *
 * Return: pointer to duplicate string
 */
char *_strdup(char *str)
{
	int len, i;
	char *dup;

	while (str[len] != '\0')
		len++;
	if (str == NULL)
		return (NULL);
	dup = malloc(sizeof(*str) * len);
	for (i = 0; i < len; i++)
	{
		dup[i] = str[i];
	}
	dup[i] = '\0';
	free(dup);

	return (dup);
}
