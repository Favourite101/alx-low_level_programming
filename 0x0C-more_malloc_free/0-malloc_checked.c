#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - returns a pointer
 * @b: memory space to be allocated
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *favour;

	favour = malloc(b);
	if (favour == NULL)
		exit (98);

	return (favour);
}
