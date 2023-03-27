#include "main.h"

/**
 * swap_int - Swaps values of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
