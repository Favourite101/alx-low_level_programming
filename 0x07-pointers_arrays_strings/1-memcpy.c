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
	char **dest_ptr;
	char **src_ptr;

	dest_ptr = &dest;
	src_ptr = &src;

	while (src_ptr[i] != '\0' && i < n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	while (i < n)
	{
		dest_ptr = '\0';
		i++;
	}

	return (dest_ptr);
}
