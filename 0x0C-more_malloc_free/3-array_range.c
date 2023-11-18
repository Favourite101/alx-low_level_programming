#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: mininum number
 * @max: maximum number
 *
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *my_array;
	int i;

	if (min > max)
		return (NULL);
	my_array = malloc(sizeof(int) * (max - min + 1));
	if (my_array == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		my_array[i] = min;
		min++;
	}

	return (my_array);
}
