#include "main.h"

/**
 * _strncat - concatenates n bytes of two strings
 * @dest: string 1
 * @str: string 2
 * @n: number of bytes
 *
 * Return: pointer to string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
		if (src[n])
			continue;
	}

	return (dest);
}
