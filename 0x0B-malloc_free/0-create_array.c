#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array and initialize it
 * @size: size of array
 * @c: charaxter
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(*str) * size);
	if (str == NULL)
		return (0);
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	str[i] = '\0';

	return (str);
}
