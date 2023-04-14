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
	void *ret1;
	void *favour;
	int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ret1 = malloc(ptr);
		return (ret1);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < old_size; i++)
	{
		ptr[i] = favour[i];
	}
	free(ptr);
	favour = malloc(new_size);

	return (favour);
}
