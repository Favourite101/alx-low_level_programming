#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates memory
 * @ptr: pointer to previously allocated memory
 * @old_size: previous size
 * @new_size: new size
 *
 * Return: reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
