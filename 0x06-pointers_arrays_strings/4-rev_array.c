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
	int i, j = n - 1, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
