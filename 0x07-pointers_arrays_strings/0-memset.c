#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: string
 * @b: constant byte
 * @n: number of bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char **s_ptr;

	for (i = 0; s_ptr[i]; i++)
	{
		if (i < n)
			_putchar(b);
	}
	
	return (s_ptr);
}
