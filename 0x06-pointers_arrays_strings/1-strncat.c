#include "main.h"

/**
 * _strncat - concatenates n bytes of two strings
 * @dest: destination sring
 * @str: source string
 * number of bytes
 *
 * Return: pointer to string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && (j < n))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
