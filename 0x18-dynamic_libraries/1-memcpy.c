#include "main.h"

/**
 * _memcpy - function copies n bytes from src to dest
 * @src: source string
 * @dest: destination string
 * @n: number of bytes
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
