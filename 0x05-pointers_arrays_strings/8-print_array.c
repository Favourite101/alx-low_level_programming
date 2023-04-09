#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements in an array
 * @a: array
 * @n: number of elements
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", a[i]);
			return;
		}
		printf("%d, ", a[i]);
	}
	printf("\n");
}
