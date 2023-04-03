#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @src: source string
 * @dest: destination string
 * @n: number of bytes
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest = '\0';
		i++;
	}

	return (dest);
}
