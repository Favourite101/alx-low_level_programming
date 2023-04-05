#include "main.h"

/**
 * _sqrt_recursion - return square root
 * @n: number
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	int i = n;

	if (n < 0)
		return (-1);
	if (i > 0)
	{
		if (i * i == n)
			return (i);
		_sqrt_recursion(n - 1);
	}
	return (-1);
}
