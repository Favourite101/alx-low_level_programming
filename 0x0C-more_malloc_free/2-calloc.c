#include "main.h"
#include <stdlib.h>

/**
 * _calloc - calloc using malloc
 * @nmemb: number of members
 * @size: size of var
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *favour;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	favour = malloc(nmemb * size);
	if (favour == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
		favour[i] = '0';
	}

	return (favour);
}
