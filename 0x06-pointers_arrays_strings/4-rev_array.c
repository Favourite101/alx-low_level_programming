#include "main.h"

/**
 * reverse_array - reverses objects in an array
 * @a: array to be tested
 * @n: number of items
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = n;

	while (i >= 0)
	{
		_putchar(a[i]);
		i--;
	}
}
