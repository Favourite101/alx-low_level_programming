#include "main.h"

/**
 * _sqrt_recursion - return square root
 * @n: number
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	int i;

	if (n < 0)
		return (-1);
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	i = n;
	if (i * i == n)
		return (i);
	_sqrt_recursion(i - 1);

	return (-1);
}
